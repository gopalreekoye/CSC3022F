//Reekoye Gopal
//23/03/2021
//
//
//main.cpp



#include <iostream>
#include <fstream>
#include <string>
#include <fstream>
#include <sstream>
#include "TagStruct.h"
#include "methods.h"

int main(int argc, char* argv[])
{
	//Print command menu

	std::cout<< "r : read and parse a specified input file"<<std::endl;
	std::cout<< "p: print all tags"<<std::endl;
	std::cout<< "d: dump/write tags and data to a file called tag.txt"<<std::endl;
	std::cout<< "l: list/print tag data for a given tag"<<std:endl;
	std::cout<< "q: terminate the input loop and exit program"<<std::endl;
	std::string command;
	std::cin >> command; //get the command first
	int n= command.length();
	if (command[0] == "r")
	{
		readFile(command.substr(2, n-1));
	}
	else if(command == "p")
	{
		print();
	}
	else if(command == "d")
	{
		dump();
	}
	else if(command == "l")
	{
		list();
	}
	else if(command == "q")
	{
		quit();
	}


}
