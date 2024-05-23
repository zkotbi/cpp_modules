/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:20:48 by zkotbi            #+#    #+#             */
/*   Updated: 2024/05/23 09:13:28 by zkotbi           ###   ########.fr       */
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
	
	std::getline(readFile, tmp, '\0');
	if (s1.size() == 0)
		replaceFile << tmp;
	else
		searchAndReplace(tmp , s1, s2, replaceFile);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "error: invalid number of arguments\n", 1);
	std::ifstream readFile(argv[1]);
	if (!readFile.is_open())
	{
		std::cout << "error: cannot open " << argv[1] << std::endl;
		return (1);
	}
	std::ofstream replaceFile(std::string(argv[1]) + ".replace");
	if (!replaceFile.is_open())
	{
		std::cout << "error: cannot open " << argv[1] << ".replace" << std::endl;
		return (readFile.close(), 1);
	}
	readAndReplace(readFile, replaceFile, std::string(argv[2]), std::string(argv[3]));
	replaceFile.close();
	readFile.close();
}
