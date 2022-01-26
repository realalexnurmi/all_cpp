/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:46:15 by pohl              #+#    #+#             */
/*   Updated: 2021/10/12 14:40:56 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
	/* this->type = "ice"; */
	std::cout << "Default constructor for Ice called" << std::endl;
	return;
}

Ice::Ice( Ice const & src ): AMateria("ice")
{
	std::cout << "Copy constructor for Ice called" << std::endl;
	*this = src;
	return;
}

Ice::~Ice( void )
{
	std::cout << "Destructor for Ice called" << std::endl;
	return;
}

Ice	&Ice::operator=( const Ice &other )
{
	this->_type = other._type;
	std::cout << "Assignation operator for Ice called" << std::endl;
	return *this;
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
		<< std::endl;
}
