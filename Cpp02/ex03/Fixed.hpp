/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:08:03 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/04 17:50:07 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>

class Fixed {
	private :
		static int ref;
		int	value;
		static const int	fractionalBits = 8;
	public :
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& to_copy);
		Fixed& operator=(const Fixed& to_copy);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		bool operator>(const Fixed other);
		bool operator<(const Fixed other);
		bool operator>=(const Fixed other);
		bool operator<=(const Fixed other);
		bool operator==(const Fixed other);
		bool operator!=(const Fixed other);
		float operator+(const Fixed other);
		float operator-(const Fixed other);
		float operator*(const Fixed other);
		float operator/(const Fixed other);
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		static Fixed& min(Fixed& fixed1, Fixed& fixed2);
		static Fixed& max(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
		static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
};

std::ostream& operator<<(std::ostream& ostream, const Fixed& to_print);

#endif 
