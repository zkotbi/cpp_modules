/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:28:51 by zkotbi            #+#    #+#             */
/*   Updated: 2024/09/30 22:25:01 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>

class Array 
{
	private:
		T *arr;
		unsigned int _size;
	public:
		T& operator[] (unsigned int index)
		{
			if (index >= _size)
				throw OutOfBound();
			return (arr[index]);
		}
		const T& operator[](const unsigned int index) const
		{
			if (index >= _size)
				throw OutOfBound();
			return (arr[index]);
		}
		Array() : arr(NULL), _size(0) {}
		Array(const Array& toCopy) : arr(new T[toCopy.size()]()), _size(toCopy.size())
		{
			for (unsigned int i = 0; i < _size; i++) {
				arr[i] = toCopy[i];
			}
		}
		Array& operator=(const Array& toCopy)
		{
			if (this == &toCopy)
				return (*this);
			delete [] arr;
			new T[toCopy.size()]();
			_size = toCopy.size();
			for (unsigned int i = 0; i < _size; i++) {
				arr[i] = toCopy[i];
			}
		}
		~Array() { delete [] arr; };
		Array(unsigned int n) : arr(new T[n]()), _size(n) {
			for (unsigned int i = 0; i < _size; i++) {
				arr[i] = 0;
			}
		}
		unsigned int size() const
		{
			return (_size);
		}
		class OutOfBound : public std::exception {
			public:
				const char *what() const throw() {
					return ("the index is out of bound");
				}
		};
};

#endif
