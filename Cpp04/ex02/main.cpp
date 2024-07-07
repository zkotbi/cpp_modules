/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:15:36 by zkotbi            #+#    #+#             */
/*   Updated: 2024/07/06 09:04:46 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

// void f(){system("leaks animal");}

int main() {
	// atexit(f);
	Animal **zoo = new Animal*[10];
	Dog dog1;
	std::cout << std::endl;
	Dog *dog2 = new Dog(dog1);
	
	std::cout << std::endl;
	delete dog2;
	int i = 0;
	while (i < 10)
	{
		while (i < 5)
		{
			std::cout << std::endl;
			zoo[i] = new Dog();
			i++;
		}
		std::cout << std::endl;
		zoo[i] = new Cat();
		i++;
	}
	zoo[0]->makeSound();
	i = 0;
	while (i < 10)
	{
		std::cout << std::endl;
		delete zoo[i];
		i++;
	}
	std::cout << std::endl;
	delete [] zoo;
	Cat jj;
	Cat hh;

	jj = hh;
}
