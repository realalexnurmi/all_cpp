/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 19:46:02 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 00:43:54 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void	display(T& item)
{
	std::cout << "Value:" << item << std::endl;
}

int	main(void)
{
	std::string	strArray[5];
	int			intArray[5];

	strArray[0] = "Hello";
	strArray[1] = ",";
	strArray[2] = "world";
	strArray[3] = "!";
	strArray[4] = "Go on!";
	::iter(strArray, 5, &display);

	std::cout << std::endl;

	intArray[0] = 1;
	intArray[1] = 2;
	intArray[2] = 3;
	intArray[3] = 4;
	intArray[4] = 5;
	::iter(intArray, 5, &display);
}
