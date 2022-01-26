/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:10 by enena             #+#    #+#             */
/*   Updated: 2022/01/25 19:50:58 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("unknown")
{
	std::cout << "Abstract class AAnimal default ctor!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& init)
{
	std::cout << "Abstract class AAnimal copy ctor!" << std::endl;
	operator=(init);
}

AAnimal::~AAnimal()
{
	std::cout << "Abstract class AAnimal dtor!" << std::endl;
}

AAnimal&			AAnimal::operator=(const AAnimal& other)
{
	if (this == &other)
		return *this;
	this->setType(other.getType());
	return *this;
}

void				AAnimal::setType(const std::string& type)
{
	_type = type;
}

const std::string&	AAnimal::getType(void) const
{
	return _type;
}
