/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:00:36 by enena             #+#    #+#             */
/*   Updated: 2022/01/26 05:04:08 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	{
		try
		{
			Bureaucrat	soLow("smallGuy", 150);

			soLow.decGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception occurred: " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat	soHigh("bigGuy", 1);

			soHigh.incGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception occurred: " << e.what() << std::endl;
		}
	}
	{
		try
		{
		Bureaucrat	wrong("unnamed", 151);

		std::cout << wrong << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception occurred: " << e.what() << std::endl;
		}
	}
	{
		try
		{
		Bureaucrat	wrong("unnamed", 0);

		std::cout << wrong << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception occurred: " << e.what() << std::endl;
		}
	}
	{
		try
		{
		Bureaucrat	normal("Alex", 69);

		std::cout << normal << std::endl;
		normal.decGrade();
		std::cout << normal << std::endl;
		normal.incGrade();
		std::cout << normal << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception occurred: " << e.what() << std::endl;
		}
	}
	
}