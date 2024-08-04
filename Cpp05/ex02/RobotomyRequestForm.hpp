/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:44:13 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 10:14:34 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "AForm.hpp"

class  RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& toCopy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& toCopy);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm(const std::string& target);
		virtual int	execute(Bureaucrat const& executor) const;
};

#endif
