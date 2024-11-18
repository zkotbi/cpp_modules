#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iterator>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack();
		MutantStack(const MutantStack& obj);
		MutantStack& operator=(const MutantStack& obj);
		~MutantStack();
};

#endif
