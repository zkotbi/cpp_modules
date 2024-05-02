/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:08:47 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/02 20:38:53 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdio>
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
		getline(std::cin, tmp);
		if (is_index_valid(tmp) == 1)
			break ;
		std::cout << "Invalid index\n";
		std::cout << "enter the contact's index >> ";
	}
	return (tmp.c_str()[0] - 48);
}

void PhoneBook::add()
{
	if (it > 7)
		it = 0;
	contact[it].id = it;
	while (1)
	{
		std::cout << "	first name:    ";
		std::getline(std::cin, contact[it].first_name);
		if (contact[it].first_name.size() != 0)
			break ;
	}
	while (1)
	{
		std::cout << "	last name:     ";
		std::getline(std::cin, contact[it].last_name);
		if (contact[it].last_name.size() != 0)
			break ;
	}
	while (1)
	{
		std::cout << "	nickname:      ";
		std::getline(std::cin, contact[it].nickname);
		if (contact[it].nickname.size() != 0)
			break ;
	}
	while (1)
	{
		std::cout << "	phone_number:  ";
		std::getline(std::cin, contact[it].phone_number);
		if (contact[it].phone_number.size() != 0)
			break ;
	}
	while (1)
	{
		std::cout << "	darkest secret: ";
		std::getline(std::cin, contact[it].darkest_secret);
		if (contact[it].darkest_secret.size() != 0)
			break ;
	}
	it++;
	if (size < 7)
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
	if (index >= size)
	{
		std::cout << "contact not found\n";
		return ;
	}
	contact[index].display_contact_info();
}
