/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:23:32 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:08:48 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "FragTrap name constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamge = 30;
}

FragTrap::FragTrap(const FragTrap& to_copy) : ClapTrap(to_copy){
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) 
{
	if (EnergyPoints == 0 || HitPoints == 0)
	{
		std::cout << "FragTrap " << name << " has no points left" << std::endl;
		return ;
	}
	EnergyPoints--;
	std::cout << "FragTrap " << name << " attacks " << target <<", causing "<< AttackDamge <<" points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " request a high Fives" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& toCopy)
{
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	if (this != &toCopy)
	{
		ClapTrap::operator=(toCopy);
	}
	return (*this);
}
