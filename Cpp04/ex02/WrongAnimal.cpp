/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:55:00 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/04 17:40:27 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	type = "undefined race";
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	type = toCopy.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& toCopy)
{
	std::cout << "WrongAnimal copy assignement operator called" << std::endl;
	if (this != &toCopy)
		type = toCopy.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Animal destuctor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (type);
}
