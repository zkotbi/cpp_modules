/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:32:06 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/08 17:56:10 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap robot1;
	ScavTrap robot2("ct2");
	ScavTrap robot3(robot2);
	robot1 = ScavTrap("robot1");
	robot2 = ScavTrap("robot2");
	robot3 = ScavTrap("robot3");
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
	robot1.takeDamage(42);
	robot1.beRepaired(55);
	robot1.beRepaired(4);
	robot1.takeDamage(42);
	std::cout << "hitPoint: " << robot1.getHitPoints() << std::endl;
	std::cout << "EnergyPoints: " << robot1.getEnergyPoints() << std::endl;
	std::cout << "attackDamage: " <<  robot1.getDamage() << std::endl;
	robot2.guardGate();
}
