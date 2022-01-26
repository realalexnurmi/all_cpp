/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:23:39 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:18:04 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int numberOfZombies, std::string name )
{
	Zombie	*zombieHorde = new Zombie[numberOfZombies];
	
	for (int i = 0; i < numberOfZombies; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
