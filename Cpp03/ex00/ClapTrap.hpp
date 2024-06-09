/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:52:27 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/06 10:37:59 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& to_copy);
		ClapTrap& operator=(const ClapTrap& to_copy);
		~ClapTrap();
		
		std::string getName() const ;
		int getHitPoints() const ;
		int getEnergyPoints() const ;
		int getDamage() const ;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
