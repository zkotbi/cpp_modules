/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:42:12 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 10:13:29 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

int	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (this->getSignState() == false)
	{
		std::cout << "the form is not signed" << std::endl;
		return (0);
	}
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	std::cout << target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
	return (1);
}


PresidentialPardonForm::PresidentialPardonForm() : AForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& toCopy) : AForm(toCopy){

	target = toCopy.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& toCopy)
{
	AForm::operator=(toCopy);
	if (this != &toCopy)
		target = toCopy.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {

}
