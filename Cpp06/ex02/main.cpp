#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

Base *generate(void)
{
	std::srand(time(NULL));
	int random = std::rand() % 3;
	switch (random) 
	{
		case (0) :
			return (dynamic_cast<Base *>(new A()));
		case (1) :
			return (dynamic_cast<Base *>(new B()));
		case (2) :
			return (dynamic_cast<Base *>(new C()));
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Ptr type: \'A\'" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Ptr type: \'B\'" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Ptr type: \'C\'" << std::endl;
	else
		std::cout << "unknown type." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &ref = dynamic_cast<A&>(p);
		std::cout << "Ref type: \'A\'" << std::endl;
		(void)ref;
		return ;
	}
	catch (...) {}
	try
	{
		B &ref = dynamic_cast<B&>(p);
		std::cout << "Ref type: \'B\'" << std::endl;
		(void)ref;
		return ;
	}
	catch (...) {}
	try
	{
		C &ref = dynamic_cast<C&>(p);
		std::cout << "Ref type: \'C\'" << std::endl;
		(void)ref;
		return ;
	}
	catch (...) {}
	std::cout << "unknown type." << std::endl;
}

int main()
{
	Base *base = generate();
	Base& baseRef = *generate();
	identify(base);
	identify(baseRef);
	delete &baseRef;
	delete base;
}
