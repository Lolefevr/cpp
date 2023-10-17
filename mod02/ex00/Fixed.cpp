/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:00:15 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/15 13:04:14 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->floatFix = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	//this->floatFix = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignation operator called" << std::endl;
    if (this != &other)
	{
        this->floatFix = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->floatFix);
}

void Fixed::setRawBits(int const raw)
{
	this->floatFix = raw;
}
