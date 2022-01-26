/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:23 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 22:30:30 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Class WrongCat default ctor!" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& init)
{
	std::cout << "Class WrongCat copy ctor!" << std::endl;
	WrongAnimal::operator=(init);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Class WrongCat dtor!" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meeeeooooow!" << std::endl;
}
