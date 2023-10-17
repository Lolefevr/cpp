/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:21:18 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/26 11:21:20 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap::ClapTrap (src)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap have enterred in high five mode" << std::endl;
}
