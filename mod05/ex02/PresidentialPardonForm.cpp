/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:01:22 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 11:08:47 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm("PresidentialPardonForm", 25, 5)
{
	if (this != &src)
		this->_target = src._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getIsSigned() == true)
		{
			if (executor.getGrade() > 5)
			{
				std::cout << "The Grade is " << executor.getGrade() << " but the Bureaucrat ";
				throw GradeTooLowException();
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (this->getIsSigned() == true)
	{
		if (executor.getGrade() <= 5)
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
