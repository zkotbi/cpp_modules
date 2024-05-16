/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:02:27 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/15 16:16:08 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string type);
		const std::string& getType();
		void setType(std::string type);	
};
#endif
