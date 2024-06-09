/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:07:32 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/04 15:45:14 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	value = to_copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& to_copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = to_copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const	
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);	
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	value = (int)roundf(num * (1 << (fractionalBits)));
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	value = (int)roundf(num * (1 << (fractionalBits)));	
}

float	Fixed::toFloat( void ) const
{
	return ((float )value / (1 << fractionalBits));
}
int		Fixed::toInt( void ) const
{
	return (value / (1 << fractionalBits));
}

std::ostream& operator<<(std::ostream& ostream, const Fixed& to_print)
{
	ostream << to_print.toFloat();
	return (ostream);
}
