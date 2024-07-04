/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:35:49 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:38:14 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void printClapTrapInfo(ClapTrap& object)
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
	ClapTrap robot1("X");
	ClapTrap robot2;

	robot1.attack("Y");
	robot1.takeDamage(5);
	robot1.beRepaired(5);
	printClapTrapInfo(robot1);
	robot2 = robot1;
	printClapTrapInfo(robot2);
}
