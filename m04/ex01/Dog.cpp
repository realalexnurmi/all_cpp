/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:15 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 22:55:28 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->setType("Dog");
	this->_brain = new Brain();
	this->_brain->thinkALot("woof");
	std::cout << "Class Dog default ctor!" << std::endl;
}

Dog::Dog(const Dog& init)
{
	std::cout << "Class Dog copy ctor!" << std::endl;
	if (init._brain)
		this->_brain = new Brain(*(init._brain));
}

Dog::~Dog(void)
{
	std::cout << "Class Dog dtor!" << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=(const Dog& other)
{
	Animal::operator=(other);
	if (this != &other)
	{
		delete this->_brain; 
		if (other._brain)
			this->_brain = new Brain(*(other._brain));
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof-woof!" << std::endl;
}

void	Dog::whatInYourMind(unsigned int deep)
{
	while (deep)
	{
		this->_brain->thinkNext();
		--deep;
	}
}
