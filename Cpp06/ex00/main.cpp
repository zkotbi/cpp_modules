#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Invalid argument" << std::endl, 1);
	ScalarConverter::convert(argv[1]);
}