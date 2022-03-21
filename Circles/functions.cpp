/** @file  */

/*
Fundamentals of Computer Programming
Cycle
*/
#include "functions.h"

tuple<string, string> files(char** arg)   
{
	string ptr = arg[1]; 
	string str = arg[3];

	if (ptr == "-g" && str =="-c")
	{

		std::string input = arg[2];
		std::string output = arg[4];

		return std::make_tuple(input, output);
	}
	else if (ptr == "-c" && str=="-g")
	{
		std::string input = arg[4];
		std::string output = arg[2];

		return std::make_tuple(input, output);
	}
	else
	{
		std::string input;
		std::string output;
		return std::make_tuple(input, output);
	}
}

int insert(std::string& input, Graph& cl)
{
	string str;
	std::ifstream File;
	File.open(input);
	if (!File.is_open())
	{
		return 1;
	}

	while (std::getline(File, str, ','))
	{

		for (auto& c : str)
		{
			if (c == '-' || c == '>')
				c = ' ';
		}

		stringstream ss;
		ss << str;
		int vertic;
		int node;

		if (ss >> vertic >> node)
			cl.add(vertic, node);
	}

	File.close();
	return 0;
}



int create(std::string& input, std::string& output)
{

	Cycl cl;

	if (insert(input, cl) == 1)
	{
		return 1;
	}

	cl.print();
	cl.Cycle();

  

	if (cl.out(output) == 1)
	{
		return 1;
	}

	return 0;
}
