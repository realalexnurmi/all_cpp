/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:12 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 22:30:07 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Class Cat default ctor!" << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat& init)
{
	std::cout << "Class Cat copy ctor!" << std::endl;
	Animal::operator=(init);
}

Cat::~Cat(void)
{
	std::cout << "Class Cat dtor!" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meeeeooooow!" << std::endl;
}
