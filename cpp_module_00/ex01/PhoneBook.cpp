/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:08:47 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/13 14:24:17 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <strings.h>

int is_index_valid(std::string str)
{
	if (str.size() != 1)
		return (0);
	else if (str.c_str()[0] > '7' || str.c_str()[0] < '0')
		return (0);
	return (1);
}

int read_index()
{
	std::string tmp;
	while (1)
	{
		if (!getline(std::cin, tmp))
			exit (0);
		if (is_index_valid(tmp) == 1)
			break ;
		std::cout << "Invalid index\n";
		std::cout << "enter the contact's index >> ";
	}
	return (tmp.c_str()[0] - 48);
}

void add_prompt(std::string str, std::string *var)
{
	std::cout << str;
	while (1) 
	{
		if (!std::getline(std::cin, *var))
			exit (0);
		if (var->size() != 0)
			break ;
		std::cout << str;
	}
}

void PhoneBook::add()
{
	if (it > 7)
		it = 0;
	contact[it].id = it;
	add_prompt("  first name:        ", &contact[it].first_name);
	add_prompt("  last name:         ", &contact[it].last_name);
	add_prompt("  nickname:          ", &contact[it].nickname);
	add_prompt("  phone number:      ", &contact[it].phone_number);
	add_prompt("  darkest secret:    ", &contact[it].darkest_secret);
	it++;
	if (size <= 7)
		size++;
}

void PhoneBook::display_contact()
{
	int i = 0;

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
	if (index > size)
	{
		std::cout << "contact not found\n";
		return ;
	}
	contact[index].display_contact_info();
}
