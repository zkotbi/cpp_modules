/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:08:40 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/15 16:16:00 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

const std::string &Weapon::getType()
{
	std::string& typeRef = this->type;
	return (typeRef);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
