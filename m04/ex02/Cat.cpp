/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:12 by enena             #+#    #+#             */
/*   Updated: 2022/01/25 19:51:53 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Class Cat default ctor!" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
	this->_brain->thinkALot("meow");
}

Cat::Cat(const Cat& init)
{
	std::cout << "Class Cat copy ctor!" << std::endl;
	if (init._brain)
		this->_brain = new Brain(*(init._brain));
}

Cat::~Cat(void)
{
	std::cout << "Class Cat dtor!" << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(const Cat& other)
{
	AAnimal::operator=(other);
	if (this != &other)
	{
		delete this->_brain; 
		if (other._brain)
			this->_brain = new Brain(*(other._brain));
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meeeeooooow!" << std::endl;
}

void	Cat::whatInYourMind(unsigned int deep)
{
	while (deep)
	{
		this->_brain->thinkNext();
		--deep;
	}
}
