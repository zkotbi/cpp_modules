/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:31:06 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/13 17:43:39 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	std::cout << "The memory address of the string:       " << &string << "\n";
	std::cout << "The memory address held by stringPTR:   " << stringPTR << "\n";
	std::cout << "The memory address held by stringREF:   " << &stringREF << "\n";
	std::cout << "The value of the string variable:       " << string << "\n";
	std::cout << "The value pointed to by stringPTR:      " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF:      " << stringREF << "\n";
}
