/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:20:37 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:04:56 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public :
		static const unsigned int defHitpoints = 100;
		static const unsigned int defEnergy = 100;
		static const unsigned int defDamage = 30;
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& to_copy);
		FragTrap& operator=(const FragTrap& toCopy);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
} ;
#endif
