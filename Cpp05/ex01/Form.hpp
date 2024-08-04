/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:26:34 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 09:14:18 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


# include "Bureaucrat.hpp"
#include <exception>
#include <string>

class  Form 
{
	private :
		const std::string name;
		bool		isSigned;
		const int	signGrade;
		const int	execGrade;			
	public :

		Form();
		Form(const Form& toCopy);
		Form& operator=(const Form& toCopy);
		~Form();

		Form(const std::string& name, const int signGrade, const int execGrade);
		void	beSigned(Bureaucrat& bureaucrat);

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

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif
