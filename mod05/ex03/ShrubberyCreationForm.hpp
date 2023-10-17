/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:56:58 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 12:12:31 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private :

		std::string _target;

	public :

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const &executor) const;
};
std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form);
