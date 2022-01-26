/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:28:56 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 17:58:22 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor for Cat called" << std::endl;
	return;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat( void )
{
	delete this->brain;
	std::cout << "Destructor for Cat called" << std::endl;
	return;
}

Cat		&Cat::operator=( Cat const &rhs )
{
	std::cout << "Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

Animal	&Cat::operator=( Animal const &rhs )
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->brain);
}
