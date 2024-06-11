/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:32:06 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/11 10:19:02 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap robot1;
	DiamondTrap robot2("ct2");
	DiamondTrap robot3(robot2);
	robot1.attack(robot2.getName());
	robot1 = DiamondTrap("robot1");
	robot2 = DiamondTrap("robot2");
	robot3 = DiamondTrap("robot3");
	std::cout << "robot1: " << robot1.getName() << std::endl;
	std::cout << "robot2: " << robot2.getName() << std::endl;
	std::cout << "robot3: " << robot3.getName() << std::endl;
	std::cout << "hitPoint: " << robot1.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << robot1.getEnergyPoints() << std::endl;
	std::cout << "attackDamage: " <<  robot1.getDamage() << std::endl;
	robot1.attack(robot2.getName());
	robot1.attack(robot2.getName());
	robot1.attack(robot2.getName());
	robot1.takeDamage(5);
	robot1.takeDamage(100);
	robot1.beRepaired(100);
	robot1.takeDamage(42);
	std::cout << "hitPoint: " << robot1.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << robot1.getEnergyPoints() << std::endl;
	std::cout << "attackDamage: " <<  robot1.getDamage() << std::endl;
	robot2.highFivesGuys();
	robot2.guardGate();
	robot2.whoAmI();
}
