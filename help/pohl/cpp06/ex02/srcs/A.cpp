/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:28 by pohl              #+#    #+#             */
/*   Updated: 2021/10/24 20:25:32 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A( void )
{
	if (Base::verbose)
		std::cout << "Default constructor for A called" << std::endl;
	return;
}

A::A( A const & src )
{
	if (Base::verbose)
		std::cout << "Copy constructor for A called" << std::endl;
	*this = src;
	return;
}

A::~A( void )
{
	return;
}

A &	A::operator=( A const & rhs )
{
	(void)rhs;
	if (Base::verbose)
		std::cout << "Assignement operator for A called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, A const & instance)
{
	(void)instance;
	ostr << "No value for A" << std::endl;
	return ostr;
}
