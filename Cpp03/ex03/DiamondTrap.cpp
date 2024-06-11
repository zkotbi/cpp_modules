/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:12:58 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/10 21:05:46 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->hitPoints = FragTrap::HitPointDefault;
	this->energyPoints = ScavTrap::EnergiyDefault;
	this->damage = FragTrap::damageDefault;
}
DiamondTrap::DiamondTrap(const DiamondTrap& to_copy) : ClapTrap(to_copy), FragTrap(to_copy), ScavTrap(to_copy)
{
	this->name = to_copy.name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& to_copy)
{
	ClapTrap::operator=(to_copy);
	this->name = to_copy.getDiamondName();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

std::string	DiamondTrap::getDiamondName() const
{
	return (this->name);
}
