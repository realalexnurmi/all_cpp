/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:09:11 by pohl              #+#    #+#             */
/*   Updated: 2021/10/04 15:22:38 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _fixed_point_value(0)
{
	if (Fixed::_verbose)
		std::cout << "Default constructor called" << std::endl;
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

// Assignement operator overload
Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if (Fixed::_verbose)
		std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point_value = rhs._fixed_point_value;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	if (Fixed::_verbose)
		std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( const int raw )
{
	if (Fixed::_verbose)
		std::cout << "setRawBits member function called" << std::endl;
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
