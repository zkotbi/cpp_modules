#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	BitcoinExchange btc(argv[1]);
	try {
		btc.processInput();	
	}
	catch (const char *s) {
		std::cout << s << std::endl;
	}
	return (0);
}
