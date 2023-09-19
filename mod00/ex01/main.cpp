/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 02:20:28 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/12 18:46:04 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	Contact		contact;
	std::string	line;

	std::cout << std::string(40, '\n');
	while (1)
	{
		phonebook.display_menu();
		usleep(100000);
		std::cout << "Choose a command >> ";
		if (std::getline(std::cin, line))
		{
			if (line == "EXIT")
				break ;
			if (line == "SEARCH")
			{
				phonebook.display_contact();
				phonebook.search_contact();
			}
			if (line == "ADD")
				phonebook.add_contact();
		}
	}
	std::cout << std::endl;
	return (0);
}
