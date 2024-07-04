/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:35:49 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:40:53 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void printFragTrapInfo(FragTrap& object)
{
	std::cout << std::endl;
	std::cout << "Name: " << object.getName() << std::endl;
	std::cout << "hit points: " << object.getHitsPoints() << std::endl;
	std::cout << "energy points: " << object.getEnergyPoints() << std::endl;
	std::cout << "attack damage: " << object.getAttakDamage() << std::endl;
	std::cout << std::endl;
}

int main( void )
{
	FragTrap robot1("X");
	FragTrap robot2;

	printFragTrapInfo(robot1);
	robot1.attack("Y");
	printFragTrapInfo(robot1);
	robot1.takeDamage(20);
	printFragTrapInfo(robot1);
	robot1.beRepaired(50);
	printFragTrapInfo(robot1);
	robot1.highFivesGuys();
	robot2 = robot1;
	printFragTrapInfo(robot2);
}
