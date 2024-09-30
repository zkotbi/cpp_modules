#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T, typename T_func>

void iter(T *array, size_t length, T_func function)
{
	for (size_t i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

#endif
