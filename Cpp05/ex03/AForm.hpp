/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:26:34 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 09:40:57 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP


# include "Bureaucrat.hpp"
#include <exception>
#include <string>

class  AForm 
{
	private :
		const std::string name;
		bool		isSigned;
		const int	signGrade;
		const int	execGrade;			
	public :

		
		AForm();
		AForm(const AForm& toCopy);
		AForm& operator=(const AForm& toCopy);
		virtual ~AForm();


		AForm(const std::string& name, const int signGrade, const int execGrade);

		void			beSigned(Bureaucrat& bureaucrat);
		virtual int	execute(Bureaucrat const & executor) const = 0;

		const std::string	getName() const;
		int			getSignGrade() const ;
		int			getExecGrade() const ;
		bool				getSignState() const ;

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

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif
