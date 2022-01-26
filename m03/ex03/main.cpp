/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 08:06:05 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 18:39:31 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("BigPile");
	ScavTrap	scavTrap("YourLeg");

	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	clapTrap.beRepaired(10);
	
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	scavTrap.beRepaired(20);
	scavTrap.guardGate();

	FragTrap	fragTrap("goodGuyButSlowly");

	fragTrap.highFivesGuys();

	std::cout << "==========================================" << std::endl;
	std::cout << "===========Begin of Diamond Part==========" << std::endl;
	std::cout << "==========================================" << std::endl;

	DiamondTrap	diamondTrap("Alex Nurmi");

	diamondTrap.attack("air around him");
	diamondTrap.takeDamage(diamondTrap.getAttackDamage());
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();
}