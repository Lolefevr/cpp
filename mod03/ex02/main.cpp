/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:21:31 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/26 11:21:32 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap P1("P1");
	FragTrap P2("P2");

	P1.attack("ennemy");
	P1.takeDamage(20);
	P1.beRepaired(10);
	P1.guardGate();

	P2.attack("ennemy");
	P2.takeDamage(20);
	P2.beRepaired(10);
	P2.highFivesGuys();
	return (0);
}
