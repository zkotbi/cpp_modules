/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:12:22 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/15 16:14:09 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}


void HumanB::setWeapon(Weapon& Weapon)
{
	this->weapon = &Weapon;
}

void HumanB::attack(void)
{
	if (weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
