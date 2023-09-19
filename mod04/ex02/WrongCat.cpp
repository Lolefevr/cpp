/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:11:58 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/19 09:20:49 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Constructor WCat called" << std::endl;
	this->_type = "WCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Destructeur WCat called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << " WrongMiAoUoUoouU" << std::endl;
}
