#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iterator>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack() {}
		MutantStack(const MutantStack& obj) : std::stack<T>(obj)
		{
		}
		MutantStack& operator=(const MutantStack& obj)
		{
			if (this != &obj)
				std::stack<T>::operator=(obj);
			return (*this);
		}
		~MutantStack() {}
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typename std::stack<T>::container_type::iterator begin()
		{
			return (this->c.begin());
		}
		typename std::stack<T>::container_type::iterator end()
		{
			return (this->c.end());
		}
		typename std::stack<T>::container_type::reverse_iterator rbegin()
		{
			return (this->c.rbegin());

		}
		typename std::stack<T>::container_type::reverse_iterator rend()
		{
			return (this->c.rend());

		}
};

#endif
