/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:35:33 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/12 11:34:55 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.hpp"

Cure::Cure() : AMateria()
{
	this->_type = "cure";
}

Cure::Cure(std::string const &type): AMateria(type) {}

Cure *Cure::clone() const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals" << target.getName() << " wounds" << std::endl;
}

Cure::~Cure() {}

