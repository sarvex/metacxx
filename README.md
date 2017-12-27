# metacxx
A C++ preprocessor created in order to simplify C++ programming.
## What is it ?
This tool is intented to make easier C++ programming. As of today, it supports only indentation management.
## How do I use it ?
In this very short tutorial, you will see how it works.
First, create a text file entitled hello_world.mcx containing the following code:
```
#include <iostream>

int main()
	td::cout << "Hello, world!\n";
	return 0;
```
Then transform it with this command:
```
mcxx hello_world.mcx hello_world.cpp
```
Then you can compile it and execute it as you would do for a regular C++ application:
```
g++ hello_world.cpp
./a.out
```
