/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:10 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 20:17:31 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("unknown")
{
	std::cout << "Class Animal default ctor!" << std::endl;
}

Animal::Animal(const Animal& init)
{
	std::cout << "Class Animal copy ctor!" << std::endl;
	operator=(init);
}

Animal::~Animal()
{
	std::cout << "Class Animal dtor!" << std::endl;
}

Animal&				Animal::operator=(const Animal& other)
{
	if (this == &other)
		return *this;
	this->setType(other.getType());
	return *this;
}

void				Animal::setType(const std::string& type)
{
	_type = type;
}

const std::string&	Animal::getType(void) const
{
	return _type;
}

void				Animal::makeSound(void) const
{
	std::cout << "Incredible sound of all types of animals together!"
		<< std::endl;
}
