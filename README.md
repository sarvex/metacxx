# metacxx
A C++ preprocessor created in order to simplify C++ programming.
## What is it ?
This tool is intented to make easier C++ programming. As of today, it supports only indentation management (see example below).
## How do I use it ?
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
## How do I install it ?
First, clone this repository:
```
git clone https://github.com/josephscade/metacxx.git
```
Then compile and install it with this command:
```
make && sudo make install
```
## Uninstallation:
Simply run this command when you are in the clonned repository folder:
```
sudo make uninstall
```
## About this software
Keep in mind this software is still in developpment, so except bugs.
