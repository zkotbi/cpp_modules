/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:59:10 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/16 19:16:13 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getNbCase(std::string str)
{
	if (str == "DEBUG")
		return (1);
	if (str == "INFO")
		return (2);
	if (str == "WARNING")
		return (3);
	if (str == "ERROR")
		return (4);
	return (0);
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
