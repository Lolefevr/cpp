/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:17:17 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/12 18:55:34 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club("some yoyo");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("sword");
		jim.attack();
	}
	return 0;
}
