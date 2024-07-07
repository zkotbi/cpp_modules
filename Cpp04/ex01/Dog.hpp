/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:00:38 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/05 10:21:36 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *DogBrain;
	public:
		Dog();
		Dog(const Dog& toCopy);
		Dog& operator=(const Dog& toCopy);
		~Dog();
		void makeSound() const;
		Brain *getBrain() const;
} ;

#endif
