/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:08:03 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/03 12:30:46 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private :
		int	value;
		static const int	fractionalBits = 8;
	public :
		Fixed();
		Fixed(const Fixed& to_copy);
		Fixed& operator=(const Fixed& to_copy);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif 
