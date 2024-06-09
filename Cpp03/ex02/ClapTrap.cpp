/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:14:37 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/08 18:58:34 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <ostream>

ClapTrap::ClapTrap()
{
	std::cout << "Default Constuctor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name Constuctor called" << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& to_copy)
{
	std::cout << "Copy Constuctor called" << std::endl;
	name = to_copy.getName();
	hitPoints = to_copy.getHitPoints();
	energyPoints = to_copy.getEnergyPoints();
	damage = to_copy.getDamage();
}

ClapTrap& ClapTrap::operator=(const ClapTrap& to_copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (&to_copy == this)
		return (*this);
	name = to_copy.getName();
	hitPoints = to_copy.getHitPoints();
	energyPoints = to_copy.getEnergyPoints();
	damage = to_copy.getDamage();
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName() const 
{
	return (name);
}

int ClapTrap::getHitPoints() const 
{
	return (hitPoints);
}

int ClapTrap::getEnergyPoints() const 
{
	return (energyPoints);
}

int ClapTrap::getDamage() const 
{
	return (damage);
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints == 0)
	{
		std::cout << name << " has no point left" << std::endl; 
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << 
		damage << " points of damage!" << std::endl;
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0 || amount > hitPoints)
	{
		hitPoints = 0;
		std::cout << name << " has no point." << std::endl;
		return ;
	}
	hitPoints -= amount;
	std::cout << name << " take " << amount << " point of damage" << std::endl; 
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0)
	{
		std::cout << name << " has no point." << std ::endl;
		return ;
	}
	energyPoints -= 1;
	hitPoints += amount;
	std::cout << name << " repaired " << amount << std::endl;
}
