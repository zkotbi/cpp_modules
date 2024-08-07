/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:15:57 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/29 14:10:08 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;

	if (N < 1)
		return (NULL);
	Zombie *zombieHorde = new Zombie[N];
	while (i < N)
		zombieHorde[i++].setName(name); 
	return (zombieHorde);
}
