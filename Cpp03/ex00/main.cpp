/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:32:06 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/06 10:52:36 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct1;
	ClapTrap ct2("ct2");
	ClapTrap ct3(ct2);
	ct1 = ct2;	
	std::cout << "ct1: " << ct1.getName() << std::endl;
	std::cout << "ct2: " << ct2.getName() << std::endl;
	std::cout << "ct3: " << ct3.getName() << std::endl;
	ct1.attack(ct2.getName());
	ct1.attack(ct2.getName());
	ct1.attack(ct2.getName());
	ct1.takeDamage(5);
	ct1.takeDamage(42);
	ct1.beRepaired(55);
	ct1.beRepaired(4);
	ct1.takeDamage(42);
	std::cout << "hitPoint: " << ct1.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	std::cout << "attackDamage: " <<  ct1.getDamage() << std::endl;
}
