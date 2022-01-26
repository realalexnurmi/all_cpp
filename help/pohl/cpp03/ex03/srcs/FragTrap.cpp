/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:26:39 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 14:08:27 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_initialHitPoints = this->_hitPoints;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Name constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap( void )
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_initialHitPoints = this->_hitPoints;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor for FragTrap called" << std::endl;
	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "Assignement operator called, but it doesn't work because I go"
		"t lazy making accessors" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

void		FragTrap::highFivesGuys( void ) const
{
	std::cout << "Hey guys! Give me a high five!!!   (advice from the developer"
		"s, don't)" << std::endl;
}
