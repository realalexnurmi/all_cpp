/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:30:54 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 20:35:09 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

Karen::Karen( void )
{
}

Karen::~Karen( void )
{
}

void	Karen::complain( std::string level )
{
	void	(Karen::*complaint[])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++)
	{
		void (Karen::*selectedComplaint)( void ) = complaint[i];
		if (level == complaintLevels[i])
			(this->*selectedComplaint)();
	}
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic"
		"kle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’"
		"t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve bee"
		"n coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
