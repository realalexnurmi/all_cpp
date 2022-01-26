/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:32:43 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 14:10:27 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string &name )
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Name constructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default constructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	std::cout << "Copy constructor for DiamondTrap called" << std::endl;
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "Assignement operator doesn't work, get lost" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

void		DiamondTrap::attack( const std::string &target ) const
{
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI( void ) const
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is "
		<< ClapTrap::_name << std::endl;
}
