/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:22:18 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/25 14:42:58 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->_hitpoints = 10;
	this->_nrgpoints = 10;
	this->_atkdmg = 0;
	return ;
}

ClapTrap::ClapTrap(std::string const name) : _name(name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_hitpoints = 10;
	this->_nrgpoints = 10;
	this->_atkdmg = 0;
	//this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}
ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_nrgpoints = other._nrgpoints;
		this->_atkdmg = other._atkdmg;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}
void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitpoints && this->_nrgpoints)
	{
		std::cout << "ClapTrap " << _name << "attacks " << target << " causing "
		<< _atkdmg << " points of damage! " << std::endl;
		this->_nrgpoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage from the ennemie"
	<< std::endl;
	this->_hitpoints -= amount;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints && this->_nrgpoints)
	{
		std::cout << "ClapTrap " << _name << " heal " << amount
		<< " lifepoint " << std::endl;
		this->_nrgpoints--;
	}
}
