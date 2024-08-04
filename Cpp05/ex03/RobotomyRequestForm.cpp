/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:47:11 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 10:15:55 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

int	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (this->getSignState() == false)
	{
		std::cout << "the form is not signed" << std::endl;
		std::cout << target << " robotomy failed." << std::endl;
		return (0);
	}
	if (executor.getGrade() > getExecGrade())
	{
		std::cout << target << " robotomy failed." << std::endl;
		throw GradeTooLowException();
	}
	std::cout << "TRTRTRTRTRTRTRTRTRTRTRTR" << std::endl; 
	std::cout << target << " has been robotomized successfully 50% of the time." << std::endl;
	return (1);
}


RobotomyRequestForm::RobotomyRequestForm() : AForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& toCopy) : AForm(toCopy){

	target = toCopy.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& toCopy)
{
	AForm::operator=(toCopy);
	if (this != &toCopy)
		target = toCopy.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {

}
