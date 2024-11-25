#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	try
	{
		PmergeMe(argc, (char **)&argv[1]);
	}
	catch (const char *str)
	{
		std::cout << str << std::endl;
		return (1);
	}
	return (0);
}
