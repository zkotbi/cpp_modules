#ifndef RPN_HPP
#define RPN_HPP

#include <string>
class RPN
{
	public:
		RPN();
		RPN(const RPN& other);
		~RPN();
		RPN& operator=(const RPN& other);
		void calculate(std::string str);
};

#endif
