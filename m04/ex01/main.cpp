/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:29:47 by enena             #+#    #+#             */
/*   Updated: 2022/01/25 19:59:01 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#define COUNT_ANIMALS 10

int	main(void)
{
	Animal* meta[COUNT_ANIMALS];

	std::cout << "========CREATE ANIMALS============" << std::endl;
	for (size_t i = 0; i < COUNT_ANIMALS; i++)
	{
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << "========DELETE ANIMALS============" << std::endl;
	for (size_t i = 0; i < COUNT_ANIMALS; i++)
		delete meta[i];
	std::cout << "========DEEP COPY============" << std::endl;

	Cat*	kitty;
	Cat*	kitty_clone;

	kitty = new Cat();
	kitty_clone = new Cat(*kitty);
	delete kitty;
	kitty_clone->whatInYourMind(10);
	delete kitty_clone;
}