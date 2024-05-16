/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:48:04 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/13 17:08:38 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie	*zombiehorde = new Zombie[N];

	while (i < N)
		zombiehorde[i++].set_name(name);
	return (zombiehorde);
}
