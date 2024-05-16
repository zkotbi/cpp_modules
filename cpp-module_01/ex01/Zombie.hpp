/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:42:19 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/13 17:05:17 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string name;
	public:
		void		announce( void );
		void		set_name(std::string name);
		std::string	get_name(void);
		~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
