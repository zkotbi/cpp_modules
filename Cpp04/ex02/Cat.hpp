/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:56:33 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/05 10:21:51 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *CatBrain;
	public:
		Cat();
		Cat(const Cat& toCopy);
		Cat& operator=(const Cat& toCopy);
		~Cat();
		void makeSound() const;
		Brain *getBrain() const;
} ;
#endif
