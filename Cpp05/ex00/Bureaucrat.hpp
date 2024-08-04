/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:41:37 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/03 15:15:57 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <exception>
#include <iostream>
#include <ostream>
#include <string>

class Bureaucrat 
{
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& toCopy);
		Bureaucrat& operator=(const Bureaucrat& toCopy);
		~Bureaucrat();

		Bureaucrat(std::string name, int grade);
		const std::string&	getName() const;
		int					getGrade() const;
		void				incrGrade();
		void				decrGrade();
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
