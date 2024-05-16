/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:08:09 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/15 16:14:55 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon& Weapon);
		void attack();
};

#endif

