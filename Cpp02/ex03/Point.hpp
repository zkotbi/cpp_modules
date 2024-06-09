/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 09:32:18 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/05 11:04:57 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"
class Point {
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float x, const float y);
		Point(Point& to_copy);
		Point& operator=(Point& to_copy);
		~Point();
		const Fixed getX() const ;
		const Fixed getY() const ;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
