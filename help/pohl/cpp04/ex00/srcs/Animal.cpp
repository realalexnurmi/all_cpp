/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:18:12 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 16:36:05 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("")
{
	std::cout << "Default constructor for Animal called" << std::endl;
	return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal( void )
{
	std::cout << "Destructor for Animal called" << std::endl;
	return;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "The sound every single animal on earth makes... I guess"
		<< std::endl;
}

const std::string	&Animal::getType( void ) const
{
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance )
{
	ostream << instance.getType();;
	return ostream;
}
