/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:06:32 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/26 14:04:55 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.hpp"

Character::Character()
{
	this ->_bagSize = -1;
	this->_name = "null";
	for (int i = 0; i < 4; i++)
		this->_mat[i] = NULL;
}

Character::Character(std::string _name) : _name(_name)
{
	this->_bagSize = -1;
	for (int i = 0; i < 4; i++)
		this->_mat[i] = NULL;
}

Character::Character(const Character &other)
{
	*this = other; // a voir si le name est bien prit
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_bagSize = other._bagSize;
		if (this != &other)
		{
			int i = -1;
			while (++i < other._bagSize)
				this->_mat[i] = other._mat[i];
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria * m)
{
	if (this->_bagSize < 3)
	{
		this->_bagSize++;
		this->_mat[this->_bagSize] = m;
		std::cout << this->getName() << " picked up " << m->getType() << std::endl;
	}
	else
		std::cout << this->getName() << " cannot picked up " << m->getType() << " because is inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->_mat[idx])
		std::cout << "cannot unequip Materia number " << idx << std::endl;
	else
	{
		std::cout << this->_name << " drop " << this->_mat[idx]->getType() << std::endl;
		this->_mat[idx] = NULL;
	}
}


void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3)
	{
		std::cout << "Wrong Materia number : " << idx << std::endl;
		return;
	}
	if (!this->_mat[idx])
		std::cout << "cannot use Materia number : " << idx << std::endl;
	else
		this->_mat[idx]->use(target);
}

Character::~Character()
{

	std::cout << this->_name << " Character destroyed" << std::endl;
	if (this->_bagSize)
	{
		for (int i = 0; i < this->_bagSize; i++)
		{
			if (this->_mat[i])
				delete this->_mat[i];
		}
	}
}
