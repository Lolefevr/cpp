/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:56:55 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 11:23:16 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm("ShrubberyCreationForm", 145, 137)
{
	if (this != &src)
		this->_target = src._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShruberryCreationForm", 145, 137), _target(target)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string nom = this->_target + "_Shrubbery";
	std::ofstream file(nom.c_str());

	try
	{
		if (executor.getGrade() > 137)
		{
			std::cout << "The Grade is " << executor.getGrade() << " but the Bureaucrat ";
			throw GradeTooLowException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (executor.getGrade() <= 137)
	{
		if (file.is_open())
        {
			file << "      ###  " << std::endl;
     		file << "     #o###  " << std::endl;
  		  	file << "   #####o###  " << std::endl;
   			file <<	"  #o#o#|#o###  " << std::endl;
   			file << "   ###o|o#o#  " << std::endl;
     		file << "     #}|{#  " << std::endl;
	        file << "      }|{  " << std::endl;
			file.close();
        }
	}
}
