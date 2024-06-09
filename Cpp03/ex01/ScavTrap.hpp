/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:06:29 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/08 18:32:13 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& to_copy);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
};
#endif
