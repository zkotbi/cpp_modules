/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:08:47 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/19 13:20:46 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <strings.h>
#include <sstream>

PhoneBook::PhoneBook() : size(0) , it(0){
}

int is_index_valid(std::string str)
{
    std::stringstream ss(str);
	int index;

	ss >> index;
	if (ss.fail() || index > 7 || index < 0)
		return (-1);
	return (index);
}

int read_index()
{
	std::string tmp;
	while (1)
	{
		getline(std::cin, tmp);
		if (is_index_valid(tmp) != -1)
			return (is_index_valid(tmp)) ;
		std::cout << "Invalid index\n";
		std::cout << "enter the contact's index >> ";
	}
	return (0);
}

void add_prompt(std::string str, std::string *var)
{
	std::cout << str;
	while (1) 
	{
		if (!std::getline(std::cin, *var))
			break ;
		if (var->size() != 0)
			break ;
		std::cout << str;
	}
}

void PhoneBook::add()
{
	if (it > 7)
		it = 0;
	contact[it].setId(it);
	add_prompt("  first name:        ", &contact[it].getAttributes(0));
	add_prompt("  last name:         ", &contact[it].getAttributes(1));
	add_prompt("  nickname:          ", &contact[it].getAttributes(2));
	add_prompt("  phone number:      ", &contact[it].getAttributes(3));
	add_prompt("  darkest secret:    ", &contact[it].getAttributes(4));
	it++;
	if (size <= 7)
		size++;
}

void PhoneBook::display_contact()
{
	int i ;
	i = 0;

	while (i < size)
	{
		contact[i].contacts_disp();
		i++;
	}
}

void PhoneBook::search()
{
	int index;

	display_contact();
	std::cout << "enter the contact's index >> ";
	index = read_index();
	if (index >= size)
	{
		std::cout << "contact not found\n";
		return ;
	}
	contact[index].display_contact_info();
}
