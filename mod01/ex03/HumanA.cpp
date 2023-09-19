/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:34:06 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/09 01:34:06 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
   return ;// Le corps du constructeur
}


HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << this->name << " Attack with " << weapon.getType() << std::endl;
}
