/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:32:06 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/08 19:01:37 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap robot1;
	FragTrap robot2("ct2");
	FragTrap robot3(robot2);
	robot1.attack(robot2.getName());
	robot1 = FragTrap("robot1");
	robot2 = FragTrap("robot2");
	robot3 = FragTrap("robot3");
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
}
