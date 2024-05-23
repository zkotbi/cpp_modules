/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:04:25 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/20 15:04:16 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>
// #include <unistd.h>

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
		return (std::cout << "choose a level\n" 
				<< "[ DEBUG ]  [ INFO ] [ WARNING ] [ ERROR ]"
				<< std::endl, 1);
	harl.complain(argv[1]);
}
