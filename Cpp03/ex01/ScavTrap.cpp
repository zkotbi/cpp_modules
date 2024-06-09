/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:21:30 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/08 18:34:48 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() :ClapTrap()
{
	std::cout << "ScavTrap Default Constuctor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "ScavTrap Name Constuctor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints == 0)
	{
		std::cout << name << " has no point left" << std::endl; 
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << 
		damage << " points of damage!" << std::endl;
	energyPoints--;
}

ScavTrap::ScavTrap(const ScavTrap& to_copy) : ClapTrap(to_copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}
