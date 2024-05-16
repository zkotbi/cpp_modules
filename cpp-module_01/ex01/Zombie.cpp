/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:42:15 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/13 17:05:11 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is destroyed\n";
}
