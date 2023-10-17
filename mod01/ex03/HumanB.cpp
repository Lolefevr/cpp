/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:34:06 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/12 18:54:56 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void    HumanB::attack()
{
    std::cout << this->name << " Attack with " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &newweapon)
{
	weapon = &newweapon;
}
