/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:01:34 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 12:12:01 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :

		std::string _target;

	public :

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	~PresidentialPardonForm();

	void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form);
