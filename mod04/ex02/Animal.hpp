/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:08:06 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/30 10:16:11 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//#include "Brain.hpp"
#include <string>
#include <iostream>

class Animal
{
	protected:

	std::string	_type;

	public:

	Animal();
	virtual ~Animal();

	virtual void	makeSound() const = 0;
	std::string		getType() const;
};
