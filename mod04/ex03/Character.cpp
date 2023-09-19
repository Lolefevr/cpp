/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:06:32 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/12 11:26:05 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.hpp"

Character::Character() : ICharacter() {}

Character::Character(std::string _name) : _name(_name) {}

Character::Character(const Character &other)
{
	*this = other; // a voir si le name est bien prit
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		while (this->bagSize > other.bagSize)
			this->_mat[++this->bagSize] = other._mat[this->bagSize];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}

Character::~Character()
{

}
