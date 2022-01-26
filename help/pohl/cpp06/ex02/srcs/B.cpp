/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:28 by pohl              #+#    #+#             */
/*   Updated: 2021/10/24 20:25:40 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B( void )
{
	if (Base::verbose)
		std::cout << "Default constructor for B called" << std::endl;
	return;
}

B::B( B const & src )
{
	if (Base::verbose)
		std::cout << "Copy constructor for B called" << std::endl;
	*this = src;
	return;
}

B::~B( void )
{
	return;
}

B &	B::operator=( B const & rhs )
{
	(void)rhs;
	if (Base::verbose)
		std::cout << "Bssignement operator for B called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, B const & instance)
{
	(void)instance;
	ostr << "No value for B" << std::endl;
	return ostr;
}
