/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:48:58 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/20 12:00:19 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "invalid arguments" << std::endl, 1);
	std::stringstream ss(argv[1]);
	Zombie *Horde;
	int num; 
	int it = 0;
	ss >> num;	
	Horde = zombieHorde(num, "bzaf");
	while (it < num)	
		Horde[it++].announce();
	delete [] Horde;
}
