/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:35:10 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/16 19:17:43 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

void Harl::debug( void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level)
{
	int i = 0;
	this->act[0] = &Harl::debug; 
	this->act[1] = &Harl::info;
	this->act[2] = &Harl::warning;
	this->act[3] = &Harl::error;
	std::string levels[4] = {"debug", "info", "warning", "error"};

	while (i < 4 && level != levels[i])
		i++;
	if (i < 4)
		(this->*act[i])();
}
