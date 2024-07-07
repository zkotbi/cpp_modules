/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:45:56 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/04 15:08:58 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	type = "undefined race";
}

Animal::Animal(const Animal& toCopy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	type = toCopy.getType();
}

Animal& Animal::operator=(const Animal& toCopy)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	if (this != &toCopy)
		type = toCopy.getType();
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destuctor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "animal sound" << std::endl;
}

std::string Animal::getType() const {
	return (type);
}
