/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:55:39 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:54:49 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon( std::string type ): type(type)
{
}

Weapon::~Weapon( void )
{
}

const std::string&	Weapon::getType( void ) const
{
	return (this->type);
}

bool		Weapon::setType( const std::string& newType )
{
	if (newType == "")
	{
		std::cout << "new type can't be empty string" << std::endl;
		return (false);
	}
	this->type = newType;
	return (true);
}
