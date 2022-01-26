/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:44:28 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 18:32:34 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("Prox"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap <" << this->getName()
		<< "> arrived as default." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap <" << this->getName()
		<< "> arrived by named." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& init)
{
	this->operator=(init);
	std::cout << "ClapTrap <" << this->getName()
		<< "> arrived by copy." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Goodbye, ClapTrap <"
		<< this->getName() << ">. Is destroyed." << std::endl;
}

ClapTrap&		ClapTrap::operator=(const ClapTrap& assign)
{
	if (this == &assign)
		return *this;
	this->setName(assign.getName());
	this->setHitPoints(assign.getHitPoints());
	this->setEnergyPoints(assign.getEnergyPoints());
	this->setAttackDamage(assign.getAttackDamage());
	return *this;
}

std::string		ClapTrap::getName(void) const
{
	return _name;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return _hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return _energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return _attackDamage;
}

void			ClapTrap::setName(const std::string& name)
{
	_name = name;
}

void			ClapTrap::setHitPoints(const unsigned int hitPoints)
{
	_hitPoints = hitPoints;
}

void			ClapTrap::setEnergyPoints(const unsigned int energyPoints)
{
	_energyPoints = energyPoints;
}

void			ClapTrap::setAttackDamage(const unsigned int attackDamage)
{
	_attackDamage = attackDamage;
}

void			ClapTrap::attack(const std::string& target)
{
	std::cout << "As ClapTrap <" << this->getName() << "> attack <" << target
		<< ">, causing <" << this->getAttackDamage() << "> points of damage!"
		<< std::endl;
	_energyPoints--;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "As ClapTrap <" << this->getName() << "> take <"
		<< amount << "> points of damage!"
		<< std::endl;
	_hitPoints -= amount;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "As ClapTrap <" << this->getName() << "> repair <"
		<< amount << "> hitpoints!"
		<< std::endl;
	_hitPoints += amount;
}
