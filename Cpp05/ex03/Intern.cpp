/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:38:24 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/03 14:11:40 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern()
{
	forms[0] = NULL;
	forms[1] = NULL;
	forms[2] = NULL;
}

AForm *Intern::makeForm(const std::string& name, const std::string& target)
{
	classNames[0] = "robotomy request";
	classNames[1] = "presidential pardon";
	classNames[2] = "shrubbery creation";
	forms[0] = new RobotomyRequestForm(target);
	forms[1] = new PresidentialPardonForm(target);
	forms[2] = new ShrubberyCreationForm(target);

	for (int i = 0; i < 3; i++)
	{
		if (classNames[i] != name)
		{
			delete forms[i]; 
			forms[i] = NULL;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] != NULL)
			return (std::cout << "Intern creates " << forms[i]->getName() << std::endl, forms[i]);
	}
	std::cout << "Intern cannot creates " << name << std::endl;
	return (NULL);
}
