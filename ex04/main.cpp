#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void replace(std::string &line, std::string str1, std::string str2)
{
	size_t pos = 0;
	while ((pos = line.find(str1, pos)) != std::string::npos)
	{
		line = line.substr(0,pos) + str2 + line.substr(pos + str1.length());
		pos += str2.length();
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "usage: ./replace file str1 str2" << std::endl;
		return 0;
	}
	std::string filename;
	std::string str1 = av[2];
	std::string str2 = av[3];
	std::string line;
	filename = av[1];
	std::ifstream in(filename.c_str());
	std::ofstream out((filename + ".replace").c_str());
	if (!in.is_open())
	{
		std::cout << "file couldnt be opened." << std::endl;
		return 0;
	}
	if (!out.is_open())
	{
		std::cout << "file couldnt be opened." << std::endl;
		in.close();
		return 0;
	}
	while (std::getline(in,line))
	{
		replace(line, str1, str2);
		out << line;
		if (!in.eof())
			out << std::endl;
	}
	in.close();
	out.close();
}
