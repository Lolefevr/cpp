/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:15:51 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 11:37:43 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	AForm *aaa = new ShrubberyCreationForm("jardin");
	AForm *bbb = new PresidentialPardonForm("Dieu");
	AForm *ccc = new RobotomyRequestForm("jcvd");
	Bureaucrat char1("MecChaud", 149);
	Bureaucrat char2("MecFroid", 149);
	Bureaucrat char3("MecTempere", 149);

	char1.signForm(aaa);
	char1.executeForm(*aaa);
	std::cout << std::endl;
	char2.signForm(bbb);
	char2.executeForm(*bbb);
	std::cout << std::endl;
	char3.signForm(ccc);
	char3.executeForm(*ccc);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Bureaucrat char11("MecSuperChaud", 1);
	Bureaucrat char22("MecSuperFroid", 1);
	Bureaucrat char33("MecSuperTempere", 1);

	char11.signForm(aaa);
	char11.executeForm(*aaa);
	std::cout << std::endl;
	char22.signForm(bbb);
	char22.executeForm(*bbb);
	std::cout << std::endl;
	char33.signForm(ccc);
	char33.executeForm(*ccc);
	std::cout << std::endl;
	return 0;
}
