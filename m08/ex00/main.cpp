/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:45:03 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 19:23:59 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	std::cout << "Vector main." << std::endl;
	{
		std::vector<int>			vect;
		std::vector<int>::iterator	it;

		for (int i = 1; i < 50; i++)
			vect.push_back(42 - 42 % i);
		try
		{
			it = easyfind(vect, 42);
			it = easyfind(vect, 43);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "List main." << std::endl;
	{
		std::list<int>				lst;
		std::list<int>::iterator	it;

		for (int i = 1; i < 50; i++)
			lst.push_back(42 - 42 % i);
		try
		{
			it = easyfind(lst, 42);
			it = easyfind(lst, 43);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;;
		}
	}
	return 0;
}
