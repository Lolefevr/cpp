/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:00:15 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/15 17:27:09 by lolefevr         ###   ########.fr       */
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
Fixed::Fixed(float const virgule)
{
	std::cout << "Float constructor called" << std::endl;
	this->floatFix = roundf(virgule * (1 << this->bit));
}

Fixed::Fixed(int const entier)
{
	std::cout << "Int constructor called" << std::endl;
	this->floatFix = entier << this->bit;
}

float	Fixed::toFloat(void) const
{
	return (float)this->floatFix / (float)(1 << this->bit);
}

int	Fixed::toInt(void) const
{
	return this->floatFix >> this->bit;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    // Convertir la partie entière en virgule flottante et la diviser par 2^(nombre de bits pour la partie fractionnaire)
//	float floatValue = static_cast<float>(fixed.getRawBits()) / (1 << fixed.bit);
	os << fixed.toFloat();
	return os;
}
