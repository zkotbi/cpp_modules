/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:34:53 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/01 14:45:40 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_upp(char **argv)
{
	int j, i = 1;

	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z') 
				argv[i][j] -= 32;
			std::cout << argv[i][j];
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" , 1);
	print_upp(argv);
	std::cout << "\n";
}
