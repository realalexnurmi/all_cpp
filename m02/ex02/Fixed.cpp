/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:51:33 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 03:58:05 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int inum) : _value(inum << bits)
{
}

Fixed::Fixed(const float fnum) : _value(roundf((1 << bits) * fnum))
{
}

Fixed::~Fixed()
{
}

Fixed&			Fixed::operator=(const Fixed& fixed)
{
	if (this == &fixed)
		return *this;
	_value = fixed.getRawBits();
	return *this;
}

bool			Fixed::operator>(const Fixed& fixed) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool			Fixed::operator<(const Fixed& fixed) const
{
	return this->getRawBits() < fixed.getRawBits();
}

bool			Fixed::operator>=(const Fixed& fixed) const
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool			Fixed::operator<=(const Fixed& fixed) const
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool			Fixed::operator==(const Fixed& fixed) const
{
	return this->getRawBits() == fixed.getRawBits();
}

bool			Fixed::operator!=(const Fixed& fixed) const
{
	return this->getRawBits() != fixed.getRawBits();
}

Fixed			Fixed::operator+(const Fixed& fixed) const
{
	Fixed	res;

	res.setRawBits(this->getRawBits() + fixed.getRawBits());
	return res;	
}

Fixed			Fixed::operator-(const Fixed& fixed) const
{
	Fixed	res;

	res.setRawBits(this->getRawBits() - fixed.getRawBits());
	return res;	
}

Fixed			Fixed::operator*(const Fixed& fixed) const
{
	Fixed	res(this->toFloat() * fixed.toFloat());

	return res;	
}

Fixed			Fixed::operator/(const Fixed& fixed) const
{
	Fixed	res(this->toFloat() / fixed.toFloat());

	return res;	
}

Fixed&			Fixed::operator++()
{
	++(this->_value);
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed	temp(*this);

	++(*this);
	return temp;
}

Fixed&			Fixed::operator--()
{
	--(this->_value);
	return (*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed	temp(*this);

	--(*this);
	return temp;
}

int				Fixed::getRawBits(void) const
{
	return	this->_value;
}

void			Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float			Fixed::toFloat(void) const
{
	return static_cast<float>(this->_value) / (1 << bits);
}

int				Fixed::toInt(void) const
{
	return this->_value >> bits;
}

Fixed&			Fixed::min(Fixed& obj1, Fixed& obj2)
{
	return obj1 < obj2 ? obj1 : obj2;
}

const Fixed&	Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	return obj1 < obj2 ? obj1 : obj2;
}

Fixed&			Fixed::max(Fixed& obj1, Fixed& obj2)
{
	return obj1 < obj2 ? obj2 : obj1;
}

const Fixed&	Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	return obj1 < obj2 ? obj2 : obj1;
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed)
{
	return out << fixed.toFloat();
}
