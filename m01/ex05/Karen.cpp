/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:36:02 by enena             #+#    #+#             */
/*   Updated: 2022/01/19 22:18:58 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->complaint[0] = &Karen::debug;
	this->complainLevels[0] = "debug";
	this->complaint[1] = &Karen::info;
	this->complainLevels[1] = "info";
	this->complaint[2] = &Karen::warning;
	this->complainLevels[2] = "warning";
	this->complaint[3] = &Karen::error;
	this->complainLevels[3] = "error";
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	std::cout.setf(std::ios_base::left);
	for (int i = 0; i < 4; i++)
	{
		void (Karen::*selComplain)(void) = complaint[i];
		if (level == complainLevels[i])
		{
			std::cout << std::setw(10) << "{" + complainLevels[i] + "}";
			(this->*selComplain)();
		}
	}
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for "
		<< "my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! "
		<< "If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and "
		<< "you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}