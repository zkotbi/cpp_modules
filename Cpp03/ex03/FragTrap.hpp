/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:01:31 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/10 20:51:56 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& to_copy);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
		static const int HitPointDefault = 100;
		static const int EnergiyDefault = 100;
		static const int damageDefault = 30;
};

#endif
