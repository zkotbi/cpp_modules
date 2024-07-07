/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:15:36 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/06 14:06:41 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

// void f(){system("leaks animal");}

int main()
{
	// atexit(f);
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* WrongI = new WrongCat();
	const Animal& ref = Dog();
	const WrongAnimal& WrongRef = WrongCat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << WrongI->getType() << " " << std::endl;
	std::cout << ref.getType() << " " << std::endl;
	std::cout << WrongRef.getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	WrongI->makeSound(); //will not output the cat sound!
	j->makeSound();
	meta->makeSound();
	ref.makeSound();
	WrongRef.makeSound();
	delete i;
	delete j;
	delete meta;
	delete WrongI;
	return 0;
}
