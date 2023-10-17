/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:21:08 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/26 16:53:51 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		unsigned int	_hitpoints;
		unsigned int	_attack_damage;
		std::string		_name;
		unsigned int	_energy_points;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap & operator=(ClapTrap const &rhs);
		~ClapTrap();

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
