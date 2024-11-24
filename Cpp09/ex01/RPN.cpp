#include "RPN.hpp"
#include <cctype>
#include <climits>
#include <cmath>
#include <iostream>
#include <stack>

RPN::RPN() {}
 
RPN::RPN(const RPN& ) {}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN& ) {return (*this);}

static bool isOper(char c)
{
	return (c == '-' || c == '+' || c == '*' || c == '/');
}

static void parseArg(std::string& str)
{
	std::string tmp = str;

	for (size_t i = 0; i < tmp.size(); i++)
	{
		if (i % 2)
		{
			if (tmp[i] != ' ')
				throw "Error";
		}
		else if (!isOper(tmp[i]) && !std::isdigit(tmp[i]))
			throw "Error";
	}
}

void RPN::calculate(std::string str) 
{
	std::stack<double> stack;
	double result;
	parseArg(str);
	for (size_t i = 0; i < str.size(); i++)
	{
		if (i % 2)
			continue ;
		if (!isOper(str[i]))
		{
			stack.push(str[i] - 48);
		}
		if (isOper(str[i]))
		{
			if (stack.size() < 2)
				throw "Error";
			double a  = stack.top();
			stack.pop();
			double b = stack.top();
			stack.pop();
			if (str[i] == '+')
				result =  a + b ;
			if (str[i] == '-')
				result = b - a;
			if (str[i] == '*')
				result =  a * b ;
			if (str[i] == '/')
				result =  b / a ;
			stack.push(result);
		}
	}
	if (stack.size() != 1)
		throw "Error";
	std::cout << stack.top() << std::endl;
}
