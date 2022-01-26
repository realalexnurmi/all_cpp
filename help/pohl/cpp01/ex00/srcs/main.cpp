/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl </var/spool/mail/pohl>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 06:43:49 by pohl              #+#    #+#             */
/*   Updated: 2021/07/19 18:09:28 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main( void )
{
	std::cout << "Creating the first Zombie, Robert, \"manually\"" << std::endl;
	{
		Zombie	robert("Robert");
		robert.announce();
	}
	std::cout << "Creating the second Zombie, Georges, using the function"
		" newZombie"<< std::endl;
	{
		Zombie	*georges = newZombie("Georges");
		georges->announce();

		delete georges;
	}
	{
		std::cout << "Creating the third Zombie, Mark, using the function"
			" randomChump"<< std::endl;
		randomChump("Mark");
	}
}
