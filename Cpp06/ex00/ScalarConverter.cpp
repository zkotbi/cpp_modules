#include "ScalarConverter.hpp"
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <ostream>
#include <string>
#include <strstream>
#include <sstream>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) {return (*this);}

ScalarConverter::~ScalarConverter() {}


static void pseudoLiterals(std::string str)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	if (str == "nan" || str == "nanf")
		std::cout << "float: nanf\ndouble: nan\n";
	if (str == "-inff" || str == "-inf")
		std::cout << "float: -inff\ndouble: -inf\n";
	if (str == "+inff" || str == "+inf")
		std::cout << "float: +inff\ndouble: +inf\n";
}


static char isNum(const std::string& str)
{
	std::stringstream ss(str);

	int num;
	double dNum;

	if (ss >> num && ss.eof())
		return ('i');
	ss.clear();
	if (str[str.size() -1] == 'f')
		ss.str(str.substr(0, str.size() -1));
	else
		ss.str(str);
	if (ss >> dNum && ss.eof() && str[0] != '.' && str.find('.') != std::string::npos)
	{
		if (str[str.size() -1] == 'f' && static_cast<float>(dNum) != INFINITY)
			return ('f');
		else if (str[str.size() -1] != 'f')
			return ('d');
	}
	return (-1); 
}

static char isLiteral(std::string str)
{
	if (str == "nan" || str == "-inff" || str == "+inff"
		|| str == "-inf" || str == "+inf" || str == "nanf")
		return (pseudoLiterals(str), 0);
	if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
		return ('c');
	return (isNum(str));
}

static void charHandler(std::string str)
{
	std::cout << "char: \'" << static_cast<char>(str[1]) << "\'"<< std::endl;
	std::cout << "int: " << static_cast<int>(str[1]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[1]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(str[1]) << ".0" <<  std::endl;
}

static void intHandler(std::string str)
{
	std::stringstream ss(str);

	int num;
	ss >> num;
	if (num > 127 || num < -128)
		std::cout << "char: Impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(num)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(num) << "\'" << std::endl;
	std::cout << "int: " << num << std::endl;
	if (num < 1000000 && num > -1000000)
	{
		std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) << ".0" <<  std::endl;
	}
	else 
	{
		std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) <<  std::endl;
	}
}

static void floatHandler(std::string str)
{
	std::stringstream ss(str.substr(0, str.size() -1));
	double fNum;
	ss >> fNum;

	if (fNum > 127 || fNum < -128)
		std::cout << "char: Impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(fNum)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(fNum) << "\'" << std::endl;

	if (fNum > INT_MAX || fNum < INT_MIN)
		std::cout << "int: Impossible" << std::endl;
	else 
		std::cout << "int: " << static_cast<int>(fNum) << std::endl;

	if (fNum < 1000000 && fNum > -1000000 && fNum == static_cast<int>(fNum))
	{
		std::cout << "float: " << static_cast<float>(fNum) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(fNum)  << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(fNum) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(fNum) << std::endl;
	}
}

static void doubleHandler(std::string str)
{
	std::stringstream ss(str);
	double dNum;

	ss >> dNum;
	if (dNum > 127 || dNum < -128)
		std::cout << "char: Impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(dNum)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(dNum) << "\'" << std::endl;

	if (dNum > INT_MAX || dNum < INT_MIN)
		std::cout << "int: Impossible" << std::endl;
	else 
		std::cout << "int: " << static_cast<int>(dNum) << std::endl;

	if (dNum < 1000000 && dNum > -1000000 && dNum == static_cast<int>(dNum))
	{
		std::cout << "float: " << static_cast<float>(dNum) << ".0f" << std::endl;
		std::cout << "double: " << dNum << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(dNum) << "f" << std::endl;
		std::cout << "double: " << dNum << std::endl;
	}
}

void ScalarConverter::convert(const std::string& str)
{
	char type = isLiteral(str);
	if (type == -1)
		std::cout << "Invalid Literal" << std::endl;
	if (type == 'c')
		charHandler(str);
	else if (type == 'i')
		intHandler(str);
	else if (type == 'd')
		doubleHandler(str);
	else if (type == 'f')
		floatHandler(str);
}
