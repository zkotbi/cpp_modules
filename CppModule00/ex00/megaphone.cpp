/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:34:53 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/19 10:57:07 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

void print_upp(std::string argv)
{
	int i = 0;

	while (i < (int )argv.size())
		std::cout << (char )toupper(argv[i++]);
}

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl , 1);
	while (i < argc)
		print_upp(std::string(argv[i++]));
	std::cout << std::endl;
}
