/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:20:48 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/15 18:34:54 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void searchAndReplace(std::string line, std::string s1, std::string s2
		,  std::ofstream& replace)
{
	std::string::size_type pos;
	int i = 0;

	while (i < (int)line.size())
	{
		pos = line.find(s1, i);
		if (std::string::npos == pos)
		{
			replace << line.substr(i);
			return ;
		}
		while (i < (int)pos)
			replace << line.c_str()[i++];
		replace << s2;
		i += s1.size();
	}
}

void readAndReplace(std::ifstream& readFile, std::ofstream& replaceFile
		, std::string s1, std::string s2)
{
	std::string tmp;
	while (std::getline(readFile, tmp))
	{
		searchAndReplace(tmp + "\n", s1, s2, replaceFile);
		if (tmp.size() == 0)
			break ;
	}
}

int main(int argc, char **argv)
{
	if (argc < 4)
		return (std::cout << "invalid number of arguments\n", 1);
	std::ifstream readFile(argv[1]);
	if (!readFile.is_open())
	{
		std::cout << "error: " << argv[1] << " not found\n";
		return (1);
	}
	std::ofstream replaceFile(std::string(argv[1]) + ".replace");
	if (!replaceFile.is_open())
	{
		std::cout << "error: cannot open jthis file\n";
		return (1);
	}
	readAndReplace(readFile, replaceFile, std::string(argv[2]), std::string(argv[3]));
	replaceFile.close();
	readFile.close();
}
