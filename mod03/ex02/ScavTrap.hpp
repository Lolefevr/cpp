/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:52:05 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/16 13:29:59 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:


	public:

	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};
