/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:21:22 by zkotbi            #+#    #+#             */
/*   Updated: 2024/09/20 04:30:32 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int main()
{
	// Bureaucrat::GradeLowException
	try {
		Bureaucrat obj;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	// Bureaucrat::GradeHighException
	try {
		Bureaucrat obj("x", 0);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat obj("x", 150);
	// Bureaucrat zk(obj);
	try {
		obj.incrGrade();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// zk = obj;
	// std::cout << "----->" << zk << std::endl;
	std::cout << obj << std::endl;
}
