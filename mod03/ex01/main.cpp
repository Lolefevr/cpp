/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:20:13 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/26 11:20:15 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap P1("P1");

	P1.attack("ennemy");
	P1.takeDamage(20);
	P1.beRepaired(10);
	P1.guardGate();
	return (0);
}
