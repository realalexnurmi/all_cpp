/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:18 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 19:26:30 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("unknown")
{
	std::cout << "Class WrongAnimal default ctor!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& init)
{
	std::cout << "Class WrongAnimal copy ctor!" << std::endl;
	operator=(init);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Class WrongAnimal dtor!" << std::endl;
}

WrongAnimal&		WrongAnimal::operator=(const WrongAnimal& init)
{
	if (this == &init)
		return *this;
	this->setType(init.getType());
	return *this;
}

void				WrongAnimal::setType(const std::string& type)
{
	_type = type;
}

const std::string&	WrongAnimal::getType(void) const
{
	return _type;
}

void				WrongAnimal::makeSound(void) const
{
	std::cout << "Incredible sound of all types of animals together!"
		<< std::endl;
}
