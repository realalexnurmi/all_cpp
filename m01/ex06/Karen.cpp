/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:36:02 by enena             #+#    #+#             */
/*   Updated: 2022/01/19 23:07:56 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->_init();
}

Karen::Karen(std::string input)
{
	this->_init();
	this->setFilter(input);
}

Karen::~Karen(void)
{
}

void	Karen::_init(void)
{
	this->complaint[0] = &Karen::debug;
	this->complainLevels[0] = "DEBUG";
	this->complaint[1] = &Karen::info;
	this->complainLevels[1] = "INFO";
	this->complaint[2] = &Karen::warning;
	this->complainLevels[2] = "WARNING";
	this->complaint[3] = &Karen::error;
	this->complainLevels[3] = "ERROR";
	this->complaint[4] = &Karen::problem;
}

void	Karen::setFilter(std::string input)
{
	this->_filter = unexpected;
	for (int i = 0; i < COUNT_COMPLAINT; i++)
	{
		if (input == complainLevels[i])
		{
			this->_filter = (t_level)i;
			break;
		}
	}
}

t_level	Karen::getFilter(void)
{
	return this->_filter;
}

void	Karen::complain(std::string level)
{
	this->selComlaint = this->complaint[COUNT_COMPLAINT];
	for (int i = 0; i < COUNT_COMPLAINT; i++)
	{
		if (level == complainLevels[i])
		{
			this->selComlaint = this->complaint[i];
			break;
		}
	}
	(this->*selComlaint)();
}

void	Karen::problem( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for "
		<< "my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! "
		<< "If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and "
		<< "you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}