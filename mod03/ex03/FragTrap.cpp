/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:17:55 by rrodor            #+#    #+#             */
/*   Updated: 2023/09/25 16:09:22 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_nrgpoints = 100;
	this->_atkdmg = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap assign operator called" << std::endl;
	if (this != &other)
	{
		this-> _name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_nrgpoints = other._nrgpoints;
		this->_atkdmg = other._atkdmg;
	}
	return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_nrgpoints = 100;
	this->_atkdmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap ask for a high five" << std::endl;
}
