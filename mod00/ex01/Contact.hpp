/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:09:14 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/07 02:06:07 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:

	Contact();
	~Contact();

	void		set_name();
	void		set_firstname();
	void		set_nickname();
	void		set_phone();
	void		set_secret();

	std::string	get_name();
	std::string	get_firstname();
	std::string	get_nickname();
	std::string	get_phone();
	std::string	get_secret();

	int			check_valid_phone(std::string phone);
	void		display_tronc(std::string str);
	void		display_full_info();

	private:

	std::string	name;
	std::string	firstname;
	std::string	nickname;
	std::string	phone;
	std::string	secret;
};

#endif
