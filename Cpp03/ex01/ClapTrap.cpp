/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 08:31:17 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:27:46 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap name constructor called" << std::endl;
	this->name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamge = 0;
}

ClapTrap::ClapTrap(const ClapTrap& to_copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = to_copy.getName();
	this->HitPoints = to_copy.getHitsPoints();
	this->EnergyPoints = to_copy.getEnergyPoints();
	this->AttackDamge = to_copy.getAttakDamage();
}

ClapTrap& ClapTrap::operator=(const ClapTrap& to_copy)
{
	std::cout << "ClapTrap copy assignement operator called" << std::endl;
	if (this != &to_copy)
	{
		this->name = to_copy.getName();
		this->HitPoints = to_copy.getHitsPoints();
		this->EnergyPoints = to_copy.getEnergyPoints();
		this->AttackDamge = to_copy.getAttakDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName() const {
	return (name);
}

int ClapTrap::getHitsPoints() const {
	return (HitPoints);
}

int ClapTrap::getEnergyPoints() const {
	return (EnergyPoints);
}

int ClapTrap::getAttakDamage() const {
	return (AttackDamge);
}

void ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints == 0 || HitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no points left" << std::endl;
		return ;
	}
	EnergyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target <<", causing "<< AttackDamge <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " already dead" << std::endl;
		return ;
	}
	if (HitPoints < amount)
		HitPoints = 0;
	else 
		HitPoints -= amount;
	std::cout << "ClapTrap " << name << " take " << amount << " of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no points left" << std::endl;
		return ;
	}
	EnergyPoints--;
	HitPoints += amount;
	std::cout << "ClapTrap " << name << " get " << amount << " hit points" << std::endl;
}
