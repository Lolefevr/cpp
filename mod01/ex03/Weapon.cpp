/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:34:57 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/09 01:34:57 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "";
    return ;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
    return ;
}

Weapon::~Weapon()
{
    return ;
}

std::string    Weapon::getType() const
{
    return this->type;
}

void    Weapon::setType(std::string const &newtype)
{
    this->type = newtype;
    return ;
}
