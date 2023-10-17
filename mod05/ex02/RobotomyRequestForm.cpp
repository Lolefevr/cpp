/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:56:45 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 11:43:47 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 75, 45), _target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm("RobotomyRequestForm", 75, 45)
{
	if (this != &src)
		this->_target = src._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 75, 45), _target(target)
{
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getIsSigned() == true)
		{
			if (executor.getGrade() > 45)
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
	if (this->getIsSigned() == true && executor.getGrade() <= 45)
	{
		std::cout << "Makes some drilling noises..." << std::endl;
		usleep(500000);
		std::cout << "Makes some drilling noises..." << std::endl;
		usleep(500000);
		std::cout << "Makes some drilling noises..." << std::endl;
		usleep(500000);
		srand(time(NULL));
		int i = rand();
		if (i % 2)
			std::cout << this->_target << " Has been robotomised" << std::endl;
		else
			std::cout << this->_target << " Failed to be robotomised" << std::endl;
	}
}
