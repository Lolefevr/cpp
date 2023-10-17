/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:51:20 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/26 11:54:00 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << "ScavTrap Constructor called" << std::endl;
	this->_atkdmg = 20;
	this->_hitpoints = 100;
	this->_nrgpoints= 50;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAVTRAP destructor called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default SCAVTRAP constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_nrgpoints= 50;
	this->_atkdmg = 20;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitpoints && this->_nrgpoints)
	{
		std::cout << "ScavTrap " << _name << "attacks " << target << " causing "
		<< _atkdmg << " points of damage! " << std::endl;
		this->_nrgpoints--;
	}
}

void ScavTrap::guardGate()
{
    std::cout  << this->_name << " ScavTrap has entered in Gate keeper mode." << std::endl;
}
