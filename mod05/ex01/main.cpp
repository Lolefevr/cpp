/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:15:51 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/09 11:52:34 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	*toto = NULL;
	Bureaucrat	*titi = NULL;
	Form		*formAlpha = NULL;

	try
	{
		formAlpha = new Form("Formulaire", 0, 42);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete formAlpha;
	try
	{
		formAlpha = new Form("Formulaire", 42, 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete formAlpha;
	try
	{
		formAlpha = new Form("Formulaire", 800, 42);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete formAlpha;
	try
	{
		toto = new Bureaucrat("macron", 1);
		std::cout << *toto << std::endl;
		titi = new Bureaucrat("Lee Sin", 150);
		std::cout << *titi << std::endl;
		formAlpha = new Form("Form", 10, 42);
		std::cout << *formAlpha << std::endl;
		toto->signForm(*formAlpha);
		titi->signForm(*formAlpha);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete formAlpha;
	delete titi;
	delete toto;
	return 0;
}
