/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:13:31 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:55:32 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): name(name), weapon(weapon)
{
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType()
		<< std::endl;
}

Weapon&	HumanA::getWeapon( void ) const
{
	return (this->weapon);
}
