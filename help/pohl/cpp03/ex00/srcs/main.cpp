/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:36:33 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 11:47:29 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap cl4ptp("cl4ptp");

	cl4ptp.attack("Handsome Jack");
	cl4ptp.takeDamage(6);
	cl4ptp.beRepaired(4);
	cl4ptp.takeDamage(3);
	cl4ptp.beRepaired(8);
	cl4ptp.takeDamage(17);
}
