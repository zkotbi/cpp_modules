/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:21:22 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/03 14:21:47 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::string name; 
	Intern inter;
	
	{
		Bureaucrat bureaucrat1("zaid", 137);
		AForm *form1 = inter.makeForm("shrubbery creation", "hicham");
		bureaucrat1.signForm(*form1);
		bureaucrat1.executeForm(*form1);
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	{
		Bureaucrat bureaucrat1("zaid", 45);
		AForm *form1 = inter.makeForm("robotomy request", "hicham");
		bureaucrat1.signForm(*form1);
		bureaucrat1.executeForm(*form1);
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	{
		Bureaucrat bureaucrat1("zaid", 5);
		PresidentialPardonForm *form1 = (PresidentialPardonForm *)inter.makeForm("presidential pardon", "hicham");
		bureaucrat1.signForm(*form1);
		bureaucrat1.executeForm(*form1);
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	inter.makeForm("", "hicham");
}
