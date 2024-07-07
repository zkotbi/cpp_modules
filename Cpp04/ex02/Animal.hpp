/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:36:48 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/05 12:14:19 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
		Animal();
		Animal(const Animal& toCopy);
	public:
		Animal& operator=(const Animal& toCopy);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};
#endif
