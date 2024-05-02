/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:25:08 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/02 18:37:01 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void print_var(std::string str)
{
	unsigned int i = 0;

	if (str.size() == 10)
		std::cout << str;
	else if (str.size() > 10)
	{
		while (i < 9)
			std::cout << str.c_str()[i++];
		std::cout << ".";
	}
	else
	{
		while (i < (10 - str.size()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << str;
	}
}

void Contact::contacts_disp()
{
	std::cout << "|" << "         " << id;
	std::cout << "|";
	print_var(first_name);
	std::cout << "|";
	print_var(last_name);
	std::cout << "|";
	print_var(nickname);
	std::cout << "|\n";
}

void Contact::display_contact_info()
{	
	std::cout << "First name:    " << first_name << "\n";	
	std::cout << "Last name:     " << last_name << "\n";	
	std::cout << "Nickname:      " << nickname << "\n";	
}
