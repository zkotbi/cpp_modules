/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:19:36 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 09:29:43 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : signGrade(0), execGrade(0)
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& toCopy) : name(toCopy.getName()), signGrade(toCopy.getSignState()),  execGrade(toCopy.getExecGrade())
{
	isSigned = 0;
}

Form& Form::operator=(const Form& toCopy)
{
	if (this != &toCopy)
		isSigned = toCopy.isSigned;
	return (*this);
}

Form::~Form() {

}

Form::Form(const std::string& name, const int signGrade, const int execGrade)
: name(name), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "Form constructor called" << std::endl;
	isSigned = 0;
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

// INFO : getters;
const std::string	Form::getName() const {
	return (name);
}

int			Form::getSignGrade() const  {
	return (signGrade);
}

int			Form::getExecGrade() const {
	return (execGrade);
}
bool				Form::getSignState() const {
	return (isSigned);
}
// INFO: exceptions;
const char *Form::GradeTooHighException::what() const throw() {
	return ("GradeTooHighException");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("GradeTooLowException");
}
// INFO: signed;
void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooLowException();
	isSigned = 1;
}
// INFO: operator overloade;
std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	out << obj.getName() << ", execGrade : " << obj.getExecGrade() << ", signGrade: " << obj.getSignGrade();
	if (obj.getSignState() == true)
		out << ", signed.";
	else
		out << ", not signed.";
	return (out);
}
