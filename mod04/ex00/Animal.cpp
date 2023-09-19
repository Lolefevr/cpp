/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:05:24 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/18 11:36:59 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "COnstructor Animal called" << std::endl;
	this->_type = "Random Animal";
}

Animal::~Animal()
{
	std::cout << "Destructeur Animal called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Random animal make a weird sound" << std::endl;
}

std::string	Animal::getType() const
{
	return this->_type;
}
