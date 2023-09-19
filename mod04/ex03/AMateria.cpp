/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:09:59 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/12 11:01:04 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &other)
{
	this->_type = other._type;
}

AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this->_type != other._type)
		this->_type = other._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void 	AMateria::use(ICharacter &target)
{

}
