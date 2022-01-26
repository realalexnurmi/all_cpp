/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:18:12 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 16:47:54 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("")
{
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor for WrongAnimal called" << std::endl;
	return;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "The sound every single animal on earth makes... I guess"
		<< std::endl;
}

const std::string	&WrongAnimal::getType( void ) const
{
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance )
{
	ostream << instance.getType();;
	return ostream;
}
