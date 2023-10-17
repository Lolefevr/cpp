/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:00:15 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 11:57:55 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->floatFix = 0;
}

Fixed::~Fixed()
{
	return;
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
	//this->floatFix = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& other)
{
    if (this != &other)
	{
        this->floatFix = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
	return (this->floatFix);
}

void Fixed::setRawBits(int const raw)
{
	this->floatFix = raw;
}
Fixed::Fixed(float const virgule)
{
	this->floatFix = roundf(virgule * (1 << this->bit));
}

Fixed::Fixed(int const entier)
{
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

bool	Fixed::operator>(Fixed const &other) const
{
	return this->floatFix > other.getRawBits();
}

bool	Fixed::operator<(Fixed const &other) const
{
	return this->floatFix < other.getRawBits();
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return this->floatFix >= other.getRawBits();
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return this->floatFix <= other.getRawBits();
}

bool	Fixed::operator==(Fixed const &other) const
{
	return this->floatFix == other.getRawBits();
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return this->floatFix != other.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed &	Fixed::operator++(void)
{
	this->floatFix++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed &	Fixed::operator--(void)
{
	this->floatFix--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	return a < b ? a : b;
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	return a > b ? a : b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	return a < b ? a : b;
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	return a > b ? a : b;
}
