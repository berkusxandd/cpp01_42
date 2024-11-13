#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << "address: " << &str << std::endl;
	std::cout << "ptr adress: " << strPtr << std::endl;
	std::cout << "ref adress: " << &strRef << std::endl;

	std::cout << "value: " << str << std::endl;
	std::cout << "ptr value : " << *strPtr << std::endl;
	std::cout << "ref value : " << strRef << std::endl;
}
