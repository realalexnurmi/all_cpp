/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:52:58 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 10:26:54 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int	main( void )
{
	Array<int>			currIntArray;
	Array<std::string>	strArray(5);
	Array<std::string>	otherStringArray;

	strArray[0] = "Hello";
	strArray[1] = ",";
	strArray[2] = "world";
	strArray[3] = "!";
	strArray[4] = "Go on!";
	std::cout << "intArray.size() = " << currIntArray.size() << std::endl;
	std::cout << "stringArray.size() = " << strArray.size() << std::endl;
	otherStringArray = strArray;
	otherStringArray[3] = "I'm good, how about you?";
	strArray[0] = "Jello";

	std::cout << std::endl;
	for (size_t i = 0; i < strArray.size(); i++)
		std::cout << strArray[i] << std::endl;

	std::cout << std::endl;
	for (size_t i = 0; i < otherStringArray.size(); i++)
		std::cout << otherStringArray[i] << std::endl;

	try
	{
		std::cout << strArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << strArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Array<int>			copyIntArray(currIntArray);
	std::cout << "copyIntArray.size() = " << copyIntArray.size() << std::endl;
	Array<int>			Another(3);
	Another[0] = 53;
	Another[1] = 42;
	Another[2] = 31;
	currIntArray = Another;
	try
	{
		std::cout << "ORIG:" << std::endl;
		for (size_t i = 0; i < currIntArray.size(); i++)
		{
			std::cout << "Original [" << i
				<< "] = " << currIntArray[i] << std::endl;
		}
		std::cout << "COPY:" << std::endl;
		for (size_t i = 0; i < copyIntArray.size(); i++)
		{
			std::cout << "Copy [" << i
				<< "] = " << copyIntArray[i] << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
