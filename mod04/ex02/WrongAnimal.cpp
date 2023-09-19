/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:11:33 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/19 09:28:53 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "COnstructor WAnimal called" << std::endl;
	this->_type = "Random WAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructeur Animal called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Random Wanimal make a weird sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}
