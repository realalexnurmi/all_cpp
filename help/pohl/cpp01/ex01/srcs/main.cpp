/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:42:50 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:11:12 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void	announceAllZombies( Zombie *zombieHorde, size_t numberOfZombies)
{
	for (size_t i = 0; i < numberOfZombies; i++)
	{
		zombieHorde[i].announce();
	}
}

int		main( void )
{
	std::cout << "Creating the first Zombie horde of Roberts" << std::endl;
	{
		Zombie	*firstZombieHorde = zombieHorde(4, "Robert");
		announceAllZombies(firstZombieHorde, 4);
		delete [] firstZombieHorde;
	}
}
