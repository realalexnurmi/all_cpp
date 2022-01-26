/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:30:19 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 17:54:29 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->setName("FragProx");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "FragTrap <" << this->getName()
		<< "> arrived as default." << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "FragTrap <" << this->getName()
		<< "> arrived by named." << std::endl;
}

FragTrap::FragTrap(const FragTrap& init)
{
	this->operator=(init);
	std::cout << "FragTrap <" << this->getName()
		<< "> arrived by copy." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Goodbye, FragTrap <"
		<< this->getName() << ">. Is destroyed." << std::endl;
}

FragTrap&		FragTrap::operator=(const FragTrap& assign)
{
	ClapTrap::operator=(assign);
	return *this;
}

void			FragTrap::attack(const std::string& target)
{
	std::cout << "As FragTrap <" << this->getName() << "> attack with SCREAM <"
		<< target
		<< ">, causing <" << this->getAttackDamage() << "> points of damage!"
		<< std::endl;
	_energyPoints--;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "As FragTrap <" << this->getName() << "> take AnOtHeR WaY <"
		<< amount << "> points of damage!"
		<< std::endl;
	_hitPoints -= amount;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "As FragTrap <" << this->getName() << "> repair AnOtHeR WaY <"
		<< amount << "> hitpoints!"
		<< std::endl;
	_hitPoints += amount;
}

void			FragTrap::highFivesGuys(void)
{
	std::cout << "As FragTrap <" << this->getName()
		<< "> rise up palm and say: \"Guys give me high five!\" - GOOD THING."
		<< std::endl;
}
