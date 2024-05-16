/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:08:36 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/13 17:05:28 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string name;
	public:
		void		announce( void );
		void		set_name(std::string name);
		std::string	get_name(void);
		~Zombie(void);
};

Zombie	*newZombie(std::string	name);
void	randomChump( std::string name );

#endif
