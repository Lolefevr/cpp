/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:31:05 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/12 18:45:38 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int		Phonebook::get_max_contact(Phonebook phonebook)
{
	return (phonebook.max_contact);
}

void	Phonebook::search_contact()
{
	std::string	str;
	int	index;

	std::cout << std::endl << "Choose an index to get more information" << std::endl;
	while (1)
	{
		std::cout << "Enter index number >> ";
		std::getline(std::cin, str);
		index = atoi(str.c_str());
		if (((!str[1]) && index <= (Phonebook::old_max_contact -1)) && str[0] >= '0' && str[0] <= '7')
			break ;
	}
	std::cout << std::endl;
	Phonebook::contact[index].display_full_info();
}

void	Phonebook::display_contact()
{
	int 	i = -1;

	std::cout << std::endl << "\033[1;31m*===============* List Of Contact *=================*\033[0m" << std::endl;
	std::cout << "\033[33m  INDEX   |FIRST NAME|   NAME   | NICKNAME |\033[0m" << std::endl;
	while (++i < this->old_max_contact)
	{
		std::cout << "    " << i << "     |";
		if (Phonebook::contact[i].get_firstname().length() <= 9)
			std::cout << std::setw(10) << Phonebook::contact[i].get_firstname() << "|";
		else
		{
			Phonebook::contact[i].display_tronc(Phonebook::contact[i].get_firstname());
			std::cout << "|";
		}
		if (Phonebook::contact[i].get_name().length() <= 9)
			std::cout << std::setw(10) << Phonebook::contact[i].get_name() << "|";
		else
		{
			Phonebook::contact[i].display_tronc(Phonebook::contact[i].get_name());
			std::cout << "|";
		}
		if (Phonebook::contact[i].get_nickname().length() <= 9)
			std::cout << std::setw(10) << Phonebook::contact[i].get_nickname() << "|" << std::endl;
		else
		{
			Phonebook::contact[i].display_tronc(Phonebook::contact[i].get_nickname());
			std::cout << "|" << std::endl;
		}
	}
}

void	Phonebook::display_menu()
{
	std::cout << std::string(5, '\n');
	std::cout << "\033[1;31m*================* NEXT LEVEL PHONEBOOK *==============*\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[36mType \"ADD\" to add a new contact.\033[0m" << std::endl;
	std::cout << "\033[33mType \"SEARCH\" to search for a contact.\033[0m" << std::endl;
	std::cout << "\033[32mType \"EXIT\" to exit the program.\033[0m" << std::endl;
	std::cout << std::endl;
}

void	Phonebook::add_contact()
{
	std::cout << std::string(3, '\n');
	std::cout << "\033[1;31m*==============* HERE YOU CAN ADD A CONTACT *=============*\033[0m" << std::endl;
	if (Phonebook::max_contact == 8)
		Phonebook::max_contact = 0;
	Phonebook::contact[Phonebook::max_contact].set_firstname();
	Phonebook::contact[Phonebook::max_contact].set_name();
	Phonebook::contact[Phonebook::max_contact].set_nickname();
	Phonebook::contact[Phonebook::max_contact].set_phone();
	Phonebook::contact[Phonebook::max_contact].set_secret();
	Phonebook::max_contact++;
	if (this->old_max_contact != 8)
		this->old_max_contact = this->max_contact;
	std::cout << Phonebook::contact[0].get_firstname() << std::endl;
	std::cout << "Contact successfully added" << std::endl;
}

Phonebook::Phonebook()
{
	Phonebook::max_contact = 0;
	Phonebook::old_max_contact = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}
