/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:50:59 by enena             #+#    #+#             */
/*   Updated: 2022/01/16 02:19:12 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	slowpokeZombie;

	slowpokeZombie = newZombie("slowpoke");
	randomChump("loudZombie");
	slowpokeZombie->announce();
	delete slowpokeZombie;
	return 0;
}
