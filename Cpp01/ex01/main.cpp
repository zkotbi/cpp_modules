/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:48:58 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/29 14:10:52 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie *Horde;
	int num = 10; 
	int it = 0;
	Horde = zombieHorde(num, "horde");
	if (Horde == NULL)
		return (0);
	while (it < num)	
		Horde[it++].announce();
	delete [] Horde;
}
