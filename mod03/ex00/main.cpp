/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:22:40 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/16 00:48:31 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(int argc, char **argv)
{
	ClapTrap P1("P1");
	ClapTrap P2("P2");

	P1.attack("P2");
	P2.takeDamage(9);
	P2.beRepaired(10);
	return (0);
	return (0);
}
