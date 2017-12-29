# metacxx
A C++ preprocessor created in order to simplify C++ programming.
## Table of content
1. [What is it ?](#whatis)
	1. [Differences between metacxx language and C++](#differences)
		1. [Off-side rule](#offside)
		1. [Semicolon-less instructions (WIP)](#semicolonless)
1. [How do I use it ?](#use)
1. [How do I install it ?](#install)
1. [Uninstallation](#uninstall)
1. [About this software](#about)
## What is it?
<a name="whatis"></a>
This aims to make easier C++ programming. It is a program which converts code to c++.
<a name="differences"></a>
### Differences between metacxx language and C++
Metacxx is created in order to make C++ a bit more minimalistic.
<a name="offside"></a>
#### Off-side rule (implemented)
Metacxx has been created in order to eliminate curly-bracket in C++. With metacxx, you can write your code with the Off-side rule, the same method as in Python.
As of today, metacxx only supports tabs-based indentation. It won't detect indentation if you use spaces in your file.
<a name="semicolonless"></a>
#### Semicolon-less instructions (WIP)
Metacxx will automatically add semicolon at the end of lines where it is needed.
<a name="use"></a>
## How do I use it?
In this very short tutorial, you will see how it works.
First, create a text file entitled hello_world.mcx containing the following code:
```
#include <iostream>

int main()
	std::cout << "Hello, world!\n";
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
<a name="install"></a>
## How do I install it?
First, clone this repository:
```
git clone https://github.com/josephscade/metacxx.git
```
Then compile and install it with this command:
```
make && sudo make install
```
<a name="uninstall"></a>
## Uninstallation:
Simply run this command when you are in the clonned repository folder:
```
sudo make uninstall
```
<a name="about"></a>
## About this software
Keep in mind this software is still in developpment, so except bugs.
