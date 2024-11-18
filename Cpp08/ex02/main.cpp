#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>


int main()
{
	MutantStack<int, std::list<int> >	newStack;

	newStack.push(12);
	newStack.push(-90);
	newStack.push(87);
	newStack.push(3);
	newStack.push(-1);
	for (MutantStack<int, std::list<int> >::iterator it = newStack.begin(); it != newStack.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	std::cout << "---" << std::endl;
	// newStack.pop();
	// newStack.pop();
	// newStack.pop();
	// newStack.pop();
	// newStack.pop();
	for (MutantStack<int, std::list<int> >::reverse_iterator it = newStack.rbegin(); it != newStack.rend(); it++)
	{
		std::cout << *it << std::endl;
	}
}
// int main()
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << mstack.back() << std::endl;
// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	// MutantStack<int>::iterator it = mstack.begin();
// 	// MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	// std::stack<int> s(mstack);
// 	return 0;
// }
