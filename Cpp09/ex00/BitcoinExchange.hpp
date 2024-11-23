#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <map>
#include <string>
class BitcoinExchange 
{
	private:
		std::string						inputFile;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange &other);
		BitcoinExchange(std::string inputFile);

		void										processInput();
		std::map<std::string, float>				getData();
};

#endif

