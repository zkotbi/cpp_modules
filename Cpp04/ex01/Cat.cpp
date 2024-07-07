/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:58:52 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/06 08:44:04 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	CatBrain = new Brain();
}

Cat::Cat(const Cat& toCopy) : Animal(toCopy) {
	std::cout << "Cat copy constructor called" << std::endl;
	CatBrain = new Brain(*toCopy.getBrain());
}

Cat& Cat::operator=(const Cat& toCopy)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	if (&toCopy != this)
	{
		Animal::operator=(toCopy);
		delete CatBrain;
		CatBrain = new Brain(*toCopy.getBrain());
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete CatBrain;
	CatBrain = NULL;
}

void Cat::makeSound() const
{
	std::cout << "miaw" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (CatBrain);
}
