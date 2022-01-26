/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:13:31 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:55:28 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ): name(name), weapon(nullptr)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void ) const
{
	if (this->weapon)
	{
		std::cout << this->name << " attacks with their " << this->weapon->getType()
			<< std::endl;
	}
	else
	{
		std::cout << this->name
			<< " can't attack because they don't have a weapon" << std::endl;
	}
}

Weapon&	HumanB::getWeapon( void ) const
{
	return (*(this->weapon));
}

bool	HumanB::setWeapon( Weapon& newWeapon )
{
	if (newWeapon.getType() == "")
	{
		std::cerr << "New weapon can't be nothing" << std::endl;
		return (false);
	}
	this->weapon = &newWeapon;
	return (true);
}
