/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:19:27 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/23 15:34:14 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.hpp"

Ice::Ice() : AMateria()
{
	this->_type = "ice";
}

Ice::Ice(std::string const &type)
{
	_type = type;
}

Ice::Ice(const Ice &other) : AMateria(other) {}

Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria	*Ice::clone() const
{
	AMateria *cpy = new Ice(*this);
	return (cpy);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at *" << target.getName() << std::endl;
}

Ice::~Ice() {}
