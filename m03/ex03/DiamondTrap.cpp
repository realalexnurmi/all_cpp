/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:25:01 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 19:06:17 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::setName("Prox_clap_name");
	this->setName("Prox");
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap <" << this->getName()
		<< "> arrived as default." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap <" << this->getName()
		<< "> arrived by named." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& init)
{
	this->operator=(init);
	std::cout << "DiamondTrap <" << this->getName()
		<< "> arrived by copy." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Goodbye, DiamondTrap <"
		<< this->getName() << ">. Is destroyed." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& assign)
{
	ScavTrap::operator=(assign);
	return *this;
}

std::string		DiamondTrap::getName(void) const
{
	return _name;
}

void			DiamondTrap::setName(const std::string& name)
{
	_name = name;
}

void			DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void			DiamondTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
}

void			DiamondTrap::beRepaired(unsigned int amount)
{
	FragTrap::beRepaired(amount);
}

void			DiamondTrap::whoAmI(void)
{
	std::cout << "I think my name is <" << this->_name
		<< "> but a voice inside me says his name is <"
		<< ClapTrap::_name << ">. It scares."
		<< std::endl;
}