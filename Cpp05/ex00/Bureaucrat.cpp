/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:41:40 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 08:51:47 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("garbage name") {
}

Bureaucrat::Bureaucrat(const Bureaucrat& toCopy) : name(toCopy.getName()), grade(toCopy.getGrade()) {
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& toCopy)
{
	if (&toCopy == this)
		return (*this);
	grade = toCopy.grade;	
	return (*this);
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else 
		this->grade = grade;
}


const std::string&	Bureaucrat::getName() const
{
    return (this->name);
}

int			Bureaucrat::getGrade() const
{
	return (this->grade);
}

void		Bureaucrat::incrGrade()
{
	if (grade == 1)
		throw GradeTooHighException();
	else 
		grade--;
}

void		Bureaucrat::decrGrade()
{
	if (grade == 150)
		throw GradeTooLowException();
	else 
		grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

