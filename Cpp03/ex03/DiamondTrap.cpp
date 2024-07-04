/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:52:16 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 15:58:27 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <ostream>

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->name = name;
	HitPoints = FragTrap::defHitpoints;
	EnergyPoints = ScavTrap::defEnergy;
	AttackDamge = FragTrap::defDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy) : ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = toCopy.getDiamondNmae();
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& toCopy)
{
	std::cout << "DiamondTrap copy assignement operator called" << std::endl;
	if (this != &toCopy)
	{
		this->name = toCopy.getDiamondNmae();
		ClapTrap::operator=(toCopy);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) 
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

std::string DiamondTrap::getDiamondNmae() const
{
	return (this->name);
}
