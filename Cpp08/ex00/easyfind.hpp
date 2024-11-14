#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw std::runtime_error("connot find the integer");
	return (it);
}

#endif
