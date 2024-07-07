/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:36:25 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/05 10:06:15 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& toCopy)
{
	int i = 0;
	std::cout << "Brain copy constructor called" << std::endl;	
	while (i < 100)
	{	
		ideas[i] = toCopy.getIdeas()[i];
		i++;
	}
}

Brain& Brain::operator=(const Brain& toCopy)
{
	int i = 0;

	std::cout << "Brain copy assignement operator called" << std::endl; 
	if (this != &toCopy)
	{
		while (i < 100)
		{	
			ideas[i] = toCopy.getIdeas()[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	 std::cout << "Brain destructor called" << std::endl;
}

const std::string *Brain::getIdeas() const {
	return (ideas);
}

Brain::Brain(const std::string str)
{
	int i = 0;
	while (i < 100)
	{
		ideas[i] = str;
		i++;
	}
}
