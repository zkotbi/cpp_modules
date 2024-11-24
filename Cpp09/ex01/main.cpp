#include "RPN.hpp"
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2 || std::string(argv[1]).size() == 0)
		return (std::cout << "Error" << std::endl, 1);
	RPN rpn;
	try
	{
		rpn.calculate(argv[1]);
	}
	catch (const char *str)
	{
		std::cout << str << std::endl;
	}
}
