/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:09:07 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 12:13:46 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ClapTrap const & src )
{
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::ClapTrap( void ): _name(""), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	this->_initialHitPoints = this->_hitPoints;
		std::cout << "Default constructor for ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap( const std::string name ): _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	this->_initialHitPoints = this->_hitPoints;
		std::cout << "Name constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap( void )
{
		std::cout << "Destructor for ClapTrap called" << std::endl;
	return;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignement operator called, but it doesn't work because I go"
		"t lazy making accessors" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, ClapTrap const & instance)
{
	ostr << "ClapTrap " << instance.getName();
	return ostr;
}

const std::string	&ClapTrap::getName( void ) const
{
	return this->_name;
}

void		ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->_name << " attack " << target
		<< " causing " << this->_attackDamage << " points of damage!"
		<< std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " damage and is quite unwell by now..." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " hit points, OUCH! Only got " << this->_hitPoints
			<< " hit points left." << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_initialHitPoints)
	{
		this->_hitPoints = this->_initialHitPoints;
		std::cout << "You can't heal more than your max!" << std::endl;
	}
	std::cout << "ClapTrap " << this->_name << " was just repaired "
		<< amount << " energy points, now he's got " << this->_hitPoints
		<< ". It ain't much, but it's honest work" << std::endl;
}
