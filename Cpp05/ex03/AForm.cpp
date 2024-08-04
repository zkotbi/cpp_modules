/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:19:36 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 09:30:49 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm() : signGrade(0), execGrade(0) 
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm& toCopy) : name(toCopy.getName()), signGrade(toCopy.getSignState()), execGrade(toCopy.getExecGrade())
{
	isSigned = 0;
}

AForm& AForm::operator=(const AForm& toCopy)
{
	if (this != &toCopy)
		isSigned = toCopy.isSigned;
	return (*this);
}

AForm::~AForm() {

}


AForm::AForm(const std::string& name, const int signGrade, const int execGrade)
: name(name), signGrade(signGrade), execGrade(execGrade)
{
	// std::cout << "Form constructor called" << std::endl;
	isSigned = 0;
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

// INFO : getters;
const std::string	AForm::getName() const {
	return (name);
}

int			AForm::getSignGrade() const  {
	return (signGrade);
}

int			AForm::getExecGrade() const {
	return (execGrade);
}
bool				AForm::getSignState() const {
	return (isSigned);
}
// INFO: exceptions;
const char *AForm::GradeTooHighException::what() const throw() {
	return ("GradeTooHighException");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("GradeTooLowException");
}
// INFO: signed;
void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooLowException();
	isSigned = 1;
}
// INFO: operator overloade;
std::ostream& operator<<(std::ostream& out, const AForm& obj)
{
	out << obj.getName() << ", execGrade : " << obj.getExecGrade() << ", signGrade: " << obj.getSignGrade();
	if (obj.getSignState() == true)
		out << ", signed.";
	else
		out << ", not signed.";
	return (out);
}
