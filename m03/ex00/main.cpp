/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 08:06:05 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 15:25:45 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("BigPile");

	clapTrap.attack("yourFeet");
	clapTrap.takeDamage(7);
	clapTrap.beRepaired(7);
}