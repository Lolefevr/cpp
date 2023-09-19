/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:08:51 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/13 16:55:39 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"
# include <unistd.h>
# include <stdlib.h>
# include <climits>

class Phonebook
{
	public:

	Phonebook();
	~Phonebook();

	int		get_max_contact(Phonebook phonebook);
	void	display_menu();
	void	display_contact();
	void	add_contact();
	void	search_contact();

	private:

	Contact	contact[8];
	int		max_contact;
	int		old_max_contact;

};

#endif
