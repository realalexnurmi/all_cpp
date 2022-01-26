/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:28 by pohl              #+#    #+#             */
/*   Updated: 2021/10/24 20:25:42 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C( void )
{
	if (Base::verbose)
		std::cout << "Default constructor for C called" << std::endl;
	return;
}

C::C( C const & src )
{
	if (Base::verbose)
		std::cout << "Copy constructor for C called" << std::endl;
	*this = src;
	return;
}

C::~C( void )
{
	return;
}

C &	C::operator=( C const & rhs )
{
	(void)rhs;
	if (Base::verbose)
		std::cout << "Cssignement operator for C called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, C const & instance)
{
	(void)instance;
	ostr << "No value for C" << std::endl;
	return ostr;
}
