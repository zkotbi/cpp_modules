#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iterator>
#include <stack>

template <typename T, class Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
	private:

	public:
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		MutantStack() {}
		MutantStack(const MutantStack& obj) : std::stack<T, Container>(obj)
		{
		}
		MutantStack& operator=(const MutantStack& obj)
		{
			if (this != &obj)
				std::stack<T, Container>::operator=(obj);
			return (*this);
		}
		~MutantStack() {}
		typename std::stack<T, Container>::container_type::iterator begin()
		{
			return (this->c.begin());
		}
		typename std::stack<T, Container>::container_type::iterator end()
		{
			return (this->c.end());
		}
		typename std::stack<T, Container>::container_type::reverse_iterator rbegin()
		{
			return (this->c.rbegin());

		}
		typename std::stack<T, Container>::container_type::reverse_iterator rend()
		{
			return (this->c.rend());
		}
};

#endif
