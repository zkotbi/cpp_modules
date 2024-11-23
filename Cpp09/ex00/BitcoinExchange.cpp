#include "BitcoinExchange.hpp"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string inputFile): inputFile(inputFile) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	this->inputFile = other.inputFile;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this == &other)
		return (*this);
	this->inputFile = other.inputFile;
	return (*this);
}

std::map<std::string, float>			BitcoinExchange::getData()
{
	std::ifstream					db("./data.csv");
	std::string						line;
	std::stringstream				ss;
	std::map<std::string, float>    map;
	double							tmpFloat;

	if (!db.is_open())
		throw "Error: could not access to data.csv";
	getline(db, line);
	while (getline(db, line))
	{
		ss.clear();
		ss << line.substr(line.find(",") + 1);
		ss >> tmpFloat;
		map[line.substr(0, line.find(","))] = tmpFloat;
	}
	return (map);
}

static void printError(std::string str)
{
	std::cout << "Error: " << str << std::endl;	
}


static void parseLine(std::string& line, std::map<std::string, float> data)
{
	size_t pos =  line.find(" | ");
	std::stringstream	ss;
	std::string			date;
	std::string			value;
	int					year = 0, month = 0, day = 0;
	float				tmpFloat;
	float				tmpInt;
	char				tmpChar;

	if (pos == std::string::npos || pos == 0 || pos + 3 == line.size())
		return (printError("bad input => " + line));
	date = line.substr(0, pos);
	value = line.substr(pos + 3);
	ss << date;
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (printError("bad input => " + line));
	ss >> year;
	if (year < 2009)
		return (printError("bad input => " + line));
	ss >> tmpChar;
	ss >> month;
	if (month > 12 || month < 1)
		return (printError("bad input => " + line));
	ss >> tmpChar;
	ss >> day;
	if (day > 31 || day < 1)
		return (printError("bad input => " + line));
	pos = value.find(".");
	ss.clear();
	ss << value;
	if (pos == std::string::npos)
	{
		ss >> tmpInt;
		if (!ss.eof())
			return (printError("bad input => " + line));
		tmpFloat = tmpInt;
	}
	else
	{
		ss >> tmpFloat;
		if (!ss.eof())
			return (printError("bad input => " + line));
	}
	if (tmpFloat > 1000)
		return (printError("too large a number."));
	if (tmpFloat < 0)
		return (printError("not a positive number."));
	for (std::map<std::string, float>::reverse_iterator it = data.rbegin(); it != data.rend();it++)
	{
		if (it->first <= date)
		{
			std::cout << date << " => " << value << " = " << tmpFloat * it->second << std::endl;
			return ;
		}
	}
	return (printError("bad input => " + line));
}

void			BitcoinExchange::processInput()
{
	std::ifstream  inputStream(this->inputFile.c_str());
	std::map<std::string, float>    data = getData();
	std::string						line;
	if (!inputStream.is_open())
		throw "Error: could not open file.";
	getline(inputStream, line);
	if (inputStream.eof() && line.size() == 0)
		throw "Error: empty file";
	if (line != "date | value")
		printError("bad input => " + line);
	while (getline(inputStream, line))
	{
		parseLine(line, data);
	}
}

