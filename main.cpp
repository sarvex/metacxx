#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int get_indent_level (string line)
{
	int array = 0;
	while (line[array] == '\t')
	{
		array ++;
	}
	return array;
}

int main (int argc, char** argv)
{
	if (argc < 2)
	{
		printf("Not enough args\n");
	}
	else
	{
		string output_file_name;
		if (argc == 2)
		{
			output_file_name = argv[2];
		}
		else
		{
			output_file_name = "output.cpp";
		}
		char* input_file_name = argv[1];
		ifstream input_file(input_file_name);
		ofstream output_file(argv[2]);
		int bracket_inside = 0;
		if (input_file.is_open() && output_file.is_open())
		{
			string line;
			int last_indent_level = 0;
			while (getline(input_file,line))
			{
				int indent_level = get_indent_level(line);
				if (indent_level != last_indent_level)
				{
					// add corresponding brackets if needed
					int add_value;
					string add_char;
					int bracket_indent = 3;
					int indent_a = indent_level;
					int indent_b = last_indent_level;
					int indent_add = 0;
					if (indent_level < last_indent_level)
					{
						add_value = 1;
						add_char = "}\n";
						bracket_indent = indent_level;
						bracket_inside --;
					}
					else
					{
						int a = indent_a;
						indent_a = indent_b;
						indent_b = a;
						add_char = "{\n";
						bracket_indent = indent_level - 1;
						indent_add = 1;
						if (indent_a - indent_b > 0)
						{
							printf("Error : indentation is strange\n");
						}
						bracket_inside ++;
					}
					for (int i = indent_b; i > indent_a; i --)
					{
						output_file << add_char;
					}
				}
				output_file << line << "\n";
				last_indent_level = indent_level;
			}
			for (int i = 0; i < bracket_inside - 1; i ++)
			{
				output_file << "}\n";
			}
			output_file.close();
		}
		else
		{
			printf("Unable to open file");
		}

	}
	return 0;
}
