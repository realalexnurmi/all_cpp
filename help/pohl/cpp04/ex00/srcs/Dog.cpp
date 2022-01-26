/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:28:56 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 16:50:52 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Default constructor for Dog called" << std::endl;
	return;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog( void )
{
	std::cout << "Destructor for Dog called" << std::endl;
	return;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf!" << std::endl;
}
