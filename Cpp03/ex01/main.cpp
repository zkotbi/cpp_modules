/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:35:49 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:39:32 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printScavTrapInfo(ScavTrap& object)
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
	ScavTrap robot1("X");
	ScavTrap robot2;
	
	robot1.attack("Y");
	printScavTrapInfo(robot1);
	robot1.takeDamage(10);
	printScavTrapInfo(robot1);
	robot1.beRepaired(10);
	printScavTrapInfo(robot1);
	robot1.guardGate();
	robot2 = robot1;
	printScavTrapInfo(robot2);
}
