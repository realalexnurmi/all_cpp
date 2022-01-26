/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:50:59 by enena             #+#    #+#             */
/*   Updated: 2022/01/16 02:19:08 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# define SIZE_HORDE	10

int	main(void)
{
	Zombie*	horde = zombieHorde(SIZE_HORDE, "oneOfThem");
	ssize_t	i;

	i = -1;
	while (++i < SIZE_HORDE)
		horde[i].announce();
	delete[] horde;
	return 0;
}
