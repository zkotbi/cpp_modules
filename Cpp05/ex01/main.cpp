/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:21:22 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/01 13:07:09 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include "Form.hpp"

int main()
{
	try {
		Form form2("yF", 0, 2);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Form form1("xF", 10, 150);

	std::cout << form1 << std::endl;
	Bureaucrat Bureaucrat1("xB", 150);
	Bureaucrat1.signForm(form1);
	std::cout << Bureaucrat1 << std::endl;
	std::cout << form1 << std::endl;
}
