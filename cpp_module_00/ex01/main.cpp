/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:07:58 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/03 10:24:36 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <istream>

void cmd_handle(std::string cmd, PhoneBook *phonebook)
{
	if (cmd == "ADD")
		phonebook->add();
	else if (cmd == "SEARCH")
		phonebook->search();
	else
		std::cout << "the command is not valid\n";
}

std::basic_istream<char> &readline(std::string &str)
{
	std::cout << "> ";
	return (std::getline(std::cin, str));
}

void prompt()
{
	PhoneBook		phonebook;
	std::string		cmd;

	phonebook.size = 0;
	phonebook.it = 0;
	while (readline(cmd))
	{
		if (!cmd.size())
			continue;
		if (cmd == "EXIT")
			break;
		cmd_handle(cmd, &phonebook);
	}
}

int main()
{
	prompt();
}
