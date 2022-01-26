/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:55:51 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 14:08:16 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_initialHitPoints = this->_hitPoints;
	std::cout << "Default constructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap::ScavTrap( const std::string name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_initialHitPoints = this->_hitPoints;
	std::cout << "Name constructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called, but for ScavTrap so it's cooler"
		<< std::endl;
	return;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Assignement operator called, but it doesn't work because I go"
		"t lazy making accessors" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

void		ScavTrap::guardGate( void ) const
{
	std::cout << "ScavTrap " << this->_name << " entered Gate Keeper mode!!! (I"
		" have no idea what this means, but cool I guess)" << std::endl;
}

void		ScavTrap::attack( std::string const & target ) const
{
	std::cout << "ScavTrap " << this->_name << " attack " << target
		<< " causing " << this->_attackDamage << " points of damage! (still tra"
		"sh)" << std::endl;
}
