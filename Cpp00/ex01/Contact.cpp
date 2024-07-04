/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:25:08 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/19 12:52:40 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : id(0) {

}

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
	std::cout << "First name:    " << this->first_name << "\n";	
	std::cout << "Last name:     " << this->last_name << "\n";	
	std::cout << "Nickname:      " << this->nickname << "\n";	
}
std::string &Contact::getAttributes(int index)
{
	if (index == 0)
		return (this->first_name);
	else if (index == 1)
		return (this->last_name);
	else if (index == 2)
		return (this->nickname);
	else if (index == 3)
		return (this->phone_number);
	else 
		return (this->darkest_secret);
}
void Contact::setId(int newId)
{
	this->id = newId;
}
