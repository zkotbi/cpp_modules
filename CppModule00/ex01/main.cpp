/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:07:58 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/19 13:02:43 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

void cmd_handle(std::string cmd, PhoneBook *phonebook)
{
	if (cmd == "ADD")
		phonebook->add();
	else if (cmd == "SEARCH")
		phonebook->search();
	else
		std::cout << "the command is not valid\n";
}

bool readline(std::string &str)
{
	std::cout << "> ";
	return ((bool)std::getline(std::cin, str));
}

void prompt()
{
	PhoneBook		phonebook;
	std::string		cmd;

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
