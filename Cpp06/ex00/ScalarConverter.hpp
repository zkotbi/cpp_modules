#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
	public:
		ScalarConverter& operator=(const ScalarConverter&);
		~ScalarConverter();
		static void convert(const std::string& str);
};

#endif // !DEBUG
