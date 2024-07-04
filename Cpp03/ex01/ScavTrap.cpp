/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:34:42 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:30:37 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamge = 20;
}

ScavTrap::ScavTrap(const ScavTrap& to_copy) : ClapTrap(to_copy){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
	if (EnergyPoints == 0 || HitPoints == 0)
	{
		std::cout << "ScavTrap " << name << " has no points left" << std::endl;
		return ;
	}
	EnergyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target <<", causing "<< AttackDamge <<" points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& to_copy)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl; 
	if (this != &to_copy) {
		ClapTrap::operator=(to_copy);
	}
	return (*this);
}
