/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:15:51 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/09 12:25:56 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

int main(void)
{
	Bureaucrat *burtata = NULL;
	Bureaucrat *titi = NULL;
	try
	{
		burtata = new Bureaucrat("tata", 153);
		burtata->incrementGrade();
		Bureaucrat burtoto("toto", -42);
		burtoto.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Erreur : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat burtoto("toto", -42);
		burtoto.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Erreur : " << e.what() << std::endl;
	}
	try
	{
		titi = new Bureaucrat("titi", 2);
		titi->incrementGrade();
		std::cout << *titi << std::endl;
		titi->incrementGrade();
		std::cout << *titi << std::endl;
		delete titi;
	}
	catch (std::exception &e)
	{
		std::cout << "Erreur : " << e.what() << std::endl;
	}
	if (titi)
		delete titi;
	if (burtata)
		delete burtata;
	Bureaucrat *b = new Bureaucrat("julien", 42);
	Bureaucrat *a = NULL;
	a = b;
	std::cout << *a << std::endl;
	std::cout << *b << std::endl;
	delete a;
//	delete b;
	return 0;
}
