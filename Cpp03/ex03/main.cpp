/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:35:49 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:46:12 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void printDiamondTrapInfo(DiamondTrap& object)
{
	std::cout << std::endl;
	std::cout << "Name: " << object.getDiamondNmae() << std::endl;
	std::cout << "ClapName: " << object.getName() << std::endl;
	std::cout << "hit points: " << object.getHitsPoints() << std::endl;
	std::cout << "energy points: " << object.getEnergyPoints() << std::endl;
	std::cout << "attack damage: " << object.getAttakDamage() << std::endl;
	std::cout << std::endl;
}

int main( void )
{
	DiamondTrap	robot1("X");
	DiamondTrap robot2;

	robot1.attack("Y");
	printDiamondTrapInfo(robot1);
	robot1.takeDamage(50);
	printDiamondTrapInfo(robot1);
	robot1.beRepaired(200);
	printDiamondTrapInfo(robot1);
	robot1.guardGate();
	robot1.highFivesGuys();
	robot1.whoAmI();
	robot2 = robot1;
	printDiamondTrapInfo(robot2);
}
