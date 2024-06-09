/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:01:31 by zkotbi            #+#    #+#             */
/*   Updated: 2024/06/08 18:32:35 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& to_copy);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif
