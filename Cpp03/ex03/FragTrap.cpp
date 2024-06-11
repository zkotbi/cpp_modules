/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:20:36 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/08 18:34:09 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :ClapTrap()
{
	std::cout << "FragTrap Default Constuctor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "FragTrap Name Constuctor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (energyPoints == 0)
	{
		std::cout << name << " has no point left" << std::endl; 
		return ;
	}
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << 
		damage << " points of damage!" << std::endl;
	energyPoints--;
}

FragTrap::FragTrap(const FragTrap& to_copy) : ClapTrap(to_copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << name << ": FragTrap highFivesGuys" << std::endl;
}
