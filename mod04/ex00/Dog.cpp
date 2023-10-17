/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:10:43 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/19 09:03:16 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Destructeur Dog called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "WoOooaaAAffFF" << std::endl;
}
