/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:56:36 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/06 08:50:17 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	DogBrain = new Brain();
}

Dog::Dog(const Dog& toCopy) : Animal(toCopy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	DogBrain = new Brain(*toCopy.getBrain());
}

Dog& Dog::operator=(const Dog& toCopy)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	if (&toCopy != this)
	{
		Animal::operator=(toCopy);
		delete DogBrain;
		DogBrain = new Brain(*toCopy.getBrain());
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete DogBrain;
	DogBrain = NULL;
}

void Dog::makeSound() const
{
	std::cout << "hawhawhaw" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (DogBrain);
}
