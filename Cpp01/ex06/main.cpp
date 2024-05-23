/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:59:10 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/20 15:22:22 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getNbCase(std::string str)
{
	int i = 0;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	while (i < 4 && levels[i] != str)
		i++;	
	return (i + 1);
}

int main(int argc, char **argv)
{
	Harl harl;
	int nbCase;
	if (argc != 2)
		return (std::cout << "invalid arguments\n", 1);
	nbCase = getNbCase(argv[1]);
	switch(nbCase)
	{
		case 1:
		{
			std::cout << "[ DEBUG ]\n";
			harl.complain("debug");
		}
		case 2:
		{
			std::cout << "[ INFO ]\n";
			harl.complain("info");
		}
		case 3:
		{
			std::cout << "[ WARNING ]\n";
			harl.complain("warning");
		}
		case 4:
		{
			std::cout << "[ ERROR ]\n";
			harl.complain("error");
			break ;
		}
		default:
		    std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
