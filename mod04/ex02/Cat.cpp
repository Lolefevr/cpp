/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:09:01 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/30 10:25:21 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Constructor Cat called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Destructeur Cat called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "MiAoUoUoouU" << std::endl;
}
