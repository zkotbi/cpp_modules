/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:20:37 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/03 16:32:06 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& to_copy);
		FragTrap& operator=(const FragTrap& to_copy);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
} ;
#endif
