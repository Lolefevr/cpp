/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:15:51 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 17:59:11 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	AForm *shru;
	AForm *robot;
	AForm *president;
	AForm *fakeForm;
	Bureaucrat *bubu = new Bureaucrat("bobo", 1);
	Intern *intern = new Intern();

	shru = intern->makeForm("shrubbery", "leSalon");
	president = intern->makeForm("presidential pardon", "jcvd");
	robot = intern->makeForm("robotomy", "Dieu");
	fakeForm = intern->makeForm("fake", "micro-onde");


	std::cout << *shru << std::endl;
	std::cout << *robot << std::endl;
	std::cout << *president << std::endl;
	std::cout << *bubu << std::endl << std::endl;


	bubu->executeForm(*shru);
	bubu->signForm(shru);
	bubu->executeForm(*shru);
	bubu->signForm(robot);
	bubu->executeForm(*robot);
	bubu->signForm(president);
	bubu->executeForm(*president);


	delete shru;
	delete robot;
	delete president;
	delete bubu;
	delete fakeForm;
	delete intern;
}
