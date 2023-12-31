/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:15:17 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 12:19:30 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *form = NULL;
	AForm *(Intern::*_funcPTR[3])(std::string target) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
	std::string _names[3] = {"presidential pardon", "robotomy", "shrubbery"};

	for (int i = 0; i < 3; i++)
	{
		if (name == _names[i])
		{
			form = (this->*_funcPTR[i])(target);
			return (form);
		}
	}
	std::cout << "Cannot create " << name << ", its bad type form" << std::endl << std::endl;
	return (NULL);
}

AForm *Intern::makePresidentialPardonForm(std::string target)
{
	AForm *form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << *form << std::endl;
	return (form);
}

AForm *Intern::makeRobotomyRequestForm(std::string target)
{
	AForm *form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << *form << std::endl;
	return (form);
}

AForm *Intern::makeShrubberyCreationForm(std::string target)
{
	AForm *form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << *form << std::endl;
	return (form);
}
