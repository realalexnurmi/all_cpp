/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:35:59 by enena             #+#    #+#             */
/*   Updated: 2022/01/16 02:12:58 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*		horde = new Zombie[N];
	ssize_t		i;

	i = -1;
	while (++i < N)
		horde[i].setName(name + "[" + std::to_string(i) + "]");
	return horde;
}