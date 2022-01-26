/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:18:12 by pohl              #+#    #+#             */
/*   Updated: 2021/10/06 15:24:43 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::~AAnimal( void )
{
	std::cout << "Destructor for AAnimal called" << std::endl;
	return;
}

const std::string	&AAnimal::getType( void ) const
{
	return (this->type);
}
