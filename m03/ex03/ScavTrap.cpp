/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:30:19 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 17:55:50 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setName("ScavProx");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->setGuardGateMode(false);
	std::cout << "ScavTrap <" << this->getName()
		<< "> arrived as default." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->setGuardGateMode(false);
	std::cout << "ScavTrap <" << this->getName()
		<< "> arrived by named." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& init)
{
	this->operator=(init);
	std::cout << "ScavTrap <" << this->getName()
		<< "> arrived by copy." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Goodbye, ScavTrap <"
		<< this->getName() << ">. Is destroyed." << std::endl;
}

ScavTrap&		ScavTrap::operator=(const ScavTrap& assign)
{
	ClapTrap::operator=(assign);
	this->setGuardGateMode(assign.getGuardGateMode());
	return *this;
}

bool	ScavTrap::getGuardGateMode(void) const
{
	return _guardGateMode;
}

void	ScavTrap::setGuardGateMode(const bool mode)
{
	_guardGateMode = mode;
}

void			ScavTrap::attack(const std::string& target)
{
	std::cout << "As ScavTrap <" << this->getName() << "> attack DIFFERENT <"
		<< target
		<< ">, causing <" << this->getAttackDamage() << "> points of damage!"
		<< std::endl;
	_energyPoints--;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "As ScavTrap <" << this->getName() << "> take ANOTHER WAY <"
		<< amount << "> points of damage!"
		<< std::endl;
	_hitPoints -= amount;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "As ScavTrap <" << this->getName() << "> repair ANOTHER WAY <"
		<< amount << "> hitpoints!"
		<< std::endl;
	_hitPoints += amount;
}

void			ScavTrap::guardGate(void)
{
	std::cout << "As ScavTrap <" << this->getName()
		<< "> now enter in Gate keeper mode. It's getting so serious!"
		<< std::endl;
	this->setGuardGateMode(true);
}
