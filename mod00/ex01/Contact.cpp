/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:21:09 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/13 17:04:41 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::display_tronc(std::string str)
{
	int	i;

	i = -1;
	while (++i < 9)
		std::cout << (char)str[i];
	std::cout << ".";
}

std::string	Contact::get_secret()
{
	return (Contact::secret);
}

std::string	Contact::get_phone()
{
	return (Contact::phone);
}

std::string	Contact::get_firstname()
{
	return (Contact::firstname);
}

std::string	Contact::get_name()
{
	return (Contact::name);
}

std::string	Contact::get_nickname()
{
	return (Contact::nickname);
}

void		Contact::display_full_info()
{
	std::cout << "\033[1;31m*================* FULL INFORMATION *=================*\033[0m" << std::endl;
	std::cout << "FIRSTNAME : " << firstname << std::endl << "NAME : " << name << std::endl;
	std::cout << "NICKNAME : " << nickname << std::endl << "PHONE : " << phone << std::endl;
	std::cout << "SECRET : " << secret << std::endl;
}

void	Contact::set_firstname()
{
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Enter First Name >> ";
		std::getline(std::cin, Contact::firstname);
		if (Contact::firstname != "")
			break;
	}
	std::cout << std::endl;
}

void	Contact::set_name()
{
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Enter Name >> ";
		std::getline(std::cin, Contact::name);
		if (Contact::name != "")
			break ;
	}
	std::cout << std::endl;
}

void	Contact::set_nickname()
{
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Enter Nickname >> ";
		std::getline(std::cin, Contact::nickname);
		if (Contact::nickname != "")
			break ;
	}
	std::cout << std::endl;
}

int	Contact::check_valid_phone(std::string phone)
{
	int	i;

	i = -1;
	while (phone[++i])
	{
		if ((phone[i] < '0') || phone[i] > '9')
			return (0);
	}
	return (1);
}

void	Contact::set_phone()
{
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Set a phone number >> ";
		std::getline(std::cin, Contact::phone);
		if (Contact::check_valid_phone(Contact::phone) == 1)
			break ;
		else
			std::cout << "Error : You need to enter numbers" << std::endl;
	}
	std::cout << std::endl;
}

void	Contact::set_secret()
{
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Tell me you'r darkest secret >> ";
		std::getline(std::cin, Contact::secret);
		if (Contact::secret != "")
			break ;
	}
	std::cout << std::endl;
}

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

