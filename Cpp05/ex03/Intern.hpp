/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:03:13 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/03 14:11:25 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern 
{
	private :
		std::string classNames[4];
		AForm *forms[3];
	public :
		Intern();
		AForm *makeForm(const std::string& name, const std::string& target);
};

#endif
