/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 09:38:11 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/05 11:04:43 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::Point(Point& to_copy) : x(to_copy.getX()), y(to_copy.getY()){
}

Point& Point::operator=(Point& to_copy) 
{
	(Fixed)x = to_copy.getX();
	(Fixed)y = to_copy.getY();
	return (*this);
}

Point::~Point() {
}

const Fixed Point::getX() const
{
	return (this->x);
}

const Fixed Point::getY() const 
{
	return (this->y);
}
