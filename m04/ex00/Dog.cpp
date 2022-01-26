/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:15 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 22:30:13 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Class Dog default ctor!" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog& init)
{
	std::cout << "Class Dog copy ctor!" << std::endl;
	Animal::operator=(init);
}

Dog::~Dog(void)
{
	std::cout << "Class Dog dtor!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof-woof!" << std::endl;
}