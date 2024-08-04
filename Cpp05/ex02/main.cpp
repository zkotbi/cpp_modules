/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:21:22 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 10:29:14 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << std::endl << std::endl;
	{
		Bureaucrat bureaucrat1("zaid", 137);
		ShrubberyCreationForm form1("hicham");
		bureaucrat1.signForm(form1);
		bureaucrat1.executeForm(form1);
	}
	std::cout << std::endl << std::endl;
	{
		Bureaucrat bureaucrat1("zaid", 150);
		RobotomyRequestForm form1("hicham");
		bureaucrat1.signForm(form1);
		bureaucrat1.executeForm(form1);
	}
	std::cout << std::endl << std::endl;
	{
		Bureaucrat bureaucrat1("zaid", 5);
		PresidentialPardonForm form1("hicham");
		bureaucrat1.signForm(form1);
		bureaucrat1.executeForm(form1);
	}
}
