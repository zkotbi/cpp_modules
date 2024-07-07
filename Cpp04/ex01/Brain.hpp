/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:27:31 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/05 10:05:25 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
	private :
		std::string ideas[100];
	public :
		Brain();
		Brain(const Brain& toCopy);
		Brain& operator=(const Brain& toCopy);
		const std::string *getIdeas() const;
		Brain(const std::string str);
		~Brain();
} ;
#endif
