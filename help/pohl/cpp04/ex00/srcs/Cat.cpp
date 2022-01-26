/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:28:56 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 16:50:47 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
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
	std::cout << "Destructor for Cat called" << std::endl;
	return;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow"
		<< std::endl;
}
