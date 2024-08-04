/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkotbi <zkotbi@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:44:04 by zkotbi            #+#    #+#             */
/*   Updated: 2024/08/04 10:17:51 by zkotbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

int	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getSignState() == false)
	{
		std::cout << "the form is not signed" << std::endl;
		return (0);
	}
	if (executor.getGrade() > getExecGrade())	
		throw GradeTooLowException();

	std::ofstream targetFile(target + "_shrubbery");
	if (!targetFile.is_open())
	{
		std::cout << "error: cannot open file" << std::endl;
		return (0);
	}
	targetFile << "               ,@@@@@@@," << std::endl;
	targetFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	targetFile << "    ,&%%&%&&%,@@@@@/@@@@@@,888888/88o" << std::endl;
	targetFile << "   ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'" << std::endl;
	targetFile << "   %&&%&%&/%&&%@@/@@/ /@@@88888/88888'" << std::endl;
	targetFile << "   %&&%/ %&%%&&@@/ V /@@' `88/8 `/88'" << std::endl;
	targetFile << "   `&%/ ` /%&'    |.|         |'|8'" << std::endl;
	targetFile << "       |o|        | |         | |" << std::endl;
	targetFile << "       |.|        | |         | |" << std::endl;
	targetFile << "jgs /// ._///_/__/  ,/_//__///.  /_//__/_" << std::endl;
	return (1);
}


ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& toCopy) : AForm(toCopy){

	target = toCopy.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& toCopy)
{
	AForm::operator=(toCopy);
	if (this != &toCopy)
		target = toCopy.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}
