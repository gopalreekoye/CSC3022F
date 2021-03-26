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
	std::vector<std::string> tagArray;
	std::vector<std::string> tagArray1;
	std::vector<int> counterArray;
	while(std::getline(reading, line))
	{
		unsigned first = line.find(<);
		unsigned last = line.find(>);
		std::string strNew = line.substr(first, last);
		tagArray.push_back(strNew);
		tagArray1.push_back(strNew);
	}
	for(int i=0; i<tagArray.size();i++)
	{
		for(int j=0;j<tagArray.size();i++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				if(tagArray[i]==tagArray[j])
				{
					tagArray1.erase(i);
				}
				else
				{
					continue;
				}
			}

		}
	}
	for(i=0; i<tagArray1.size();i++)
	{
		counterArray[i]=0;

	}
	for(i=0; i<tagArray1.size();i++)
	{
		for(j=0; j<tagArray.size;j++)
		{
			if(tagArray1[i]==tagArray[j])
			{
				counterArray[i]++;
			}
		}
	}
	std::vector<std::string> text;
	for(i=0; i<tagArray1.size();i++)
	{
		text[i]="";
	}

	while(std::getline(reading, line))
	{
		unsigned first = line.find(<);
		unsigned last = line.find(>);
		int len=last+1;
		int n=line.size();
		std::string strN=line.substring(first, last);
		for(i=0; i<tagArray1.size();i++)
		{
			if(tagArray1[i]== strN)
			{
				std::string txt=line.substring(last, (n-len-2));
				text[i].append(" :"<<txt);
			}
			else{continue;}

		}
	}
	for(i=0; i<tagArray1.size();i++)
	{
		tags.push_back({tagArray1[1], counterArray[i], text[i]})
	}

	

	reading.close()

}

std::string print()
{
	for(int s=0; s<tags.size();s++)
	{
		std::string strtag=tags[i].tagname;
		int inpair=tags[i].tagpair;
		std::string strtxt=tags[i].txt;
		std::cout << strtag<< ", "<< inpair<<", "<<strtxt<< std::endl;
	}

}
dump()
{
	//Create and open a text file
	ofstream myFile("tag.txt");
	//write to file
	for(int t=0; t<tags.size();t++)
	{
		std::string sttag=tags[i].tagname;
		int ipair=tags[i].tagpair;
		std::string sttxt=tags[i].txt;
		myFile << sttag<< ", "<<ipair<<", "<<sttxt<<std::endl;
	}
	myFile.close();
}
std::string list(std::string)
{


}
quit()
{
	return 1;
}





