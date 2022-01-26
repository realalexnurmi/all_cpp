/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:09:11 by pohl              #+#    #+#             */
/*   Updated: 2021/10/04 15:20:38 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ): _fixed_point_value(0)
{
	if (Fixed::_verbose)
		std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int value )
{
	if (Fixed::_verbose)
		std::cout << "Constant integer constructor called" << std::endl;
	this->_fixed_point_value = value << this->_number_of_fractional_bits;
	return;
}

Fixed::Fixed( const float value )
{
	int power = pow(2, this->_number_of_fractional_bits);

	if (Fixed::_verbose)
		std::cout << "Constant float constructor called" << std::endl;
	this->_fixed_point_value = roundf(value * power);
	return;
}

Fixed::Fixed( Fixed const & src )
{
	if (Fixed::_verbose)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void )
{
	if (Fixed::_verbose)
		std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if (Fixed::_verbose)
		std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point_value = rhs._fixed_point_value;
	return *this;
}

int	Fixed::toInt( void ) const
{
	return (this->_fixed_point_value >> this->_number_of_fractional_bits);
}

float	Fixed::toFloat( void ) const
{
	int		power = pow(2, this->_number_of_fractional_bits);
	float	result = (float)this->_fixed_point_value / power;

	return (result);
}

int	Fixed::getRawBits( void ) const
{
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( const int raw )
{
	this->_fixed_point_value = raw;
}

void	Fixed::setVerbose( bool value )
{
	Fixed::_verbose = value;
}

bool	Fixed::getVerbose( void )
{
	return (Fixed::_verbose);
}

bool	Fixed::_verbose = false;

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}

int		ft_pow(int val, int pow)
{
	int		i = 0;
	int		result;

	result = 1;
	while (i < pow)
	{
		result *= val;
		i++;
	}
	return (result);
}
