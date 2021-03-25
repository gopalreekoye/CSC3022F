//Reekoye Gopal
//23/03/2021
//
//
//method.cpp


#include <iostream>
#include <fstream>
#include <vector>
#include <string>



std::vector<TagStruct> tags;

//function definition

readFile(string txt)
{
	std::ifstream reading(txt);

	if(!reading)
	{
		std::cout<< "Couldn't open file"<<txt<<std::endl;
		return 1;
	}
	int txtnum= 0;
	std::string text = "";
	std::string tagtxt = "";
	std::string line;
	
	while(std::getline(reading, line))
	{
		
		std::string tagname;
		int tagpair;
		int n= line.length();

		if(line.substr(0,4)=="<TXT>")
		{
			tagname=line.substr(1,3);
			txtnum++;
			text.append(":");
			text.append(line.substr(5,(n-6)));

		}
		else if(line.substr(0,3)=="<TAG")
		{}

		tags.push_back({});
	}
	tags.push_back({tagname, txtnum, text});

	reading.close();
	



}
