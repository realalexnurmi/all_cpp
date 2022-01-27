/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:00:36 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 05:10:57 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	One("One", 5);
	Bureaucrat	Two("Two", 24);
	Bureaucrat	Three("Three", 50);
	Bureaucrat	Four("Four", 140);
	Bureaucrat	Five("Five", 5);

	PresidentialPardonForm	AlexPardon1("Alex");
	PresidentialPardonForm	AlexPardon2("Alex");
	PresidentialPardonForm	AlexPardon3("Alex");
	PresidentialPardonForm	AlexPardon4("Alex");
	PresidentialPardonForm	AlexPardon5("Alex");

	RobotomyRequestForm	GineRobot1("Gine");
	RobotomyRequestForm	GineRobot2("Gine");
	RobotomyRequestForm	GineRobot3("Gine");
	RobotomyRequestForm	GineRobot4("Gine");
	RobotomyRequestForm	GineRobot5("Gine");

	ShrubberyCreationForm	HomeDecor1("Home1");
	ShrubberyCreationForm	HomeDecor2("Home2");
	ShrubberyCreationForm	HomeDecor3("Home3");
	ShrubberyCreationForm	HomeDecor4("Home4");
	ShrubberyCreationForm	HomeDecor5("Home5");

	try
	{
		One.signForm(AlexPardon1);
		One.signForm(GineRobot1);
		One.signForm(HomeDecor1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "One sign trouble: " << e.what() << std::endl;
	}
	try
	{
		One.executeForm(AlexPardon1);
		One.executeForm(GineRobot1);
		One.executeForm(HomeDecor1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "One execute trouble: " << e.what() << std::endl;
	}

	try
	{
		Two.signForm(AlexPardon2);
		Two.signForm(GineRobot2);
		Two.signForm(HomeDecor2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Two sign trouble: " << e.what() << std::endl;
	}
	try
	{
		Two.executeForm(AlexPardon2);
		Two.executeForm(GineRobot2);
		Two.executeForm(HomeDecor2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Two sign trouble: " << e.what() << std::endl;
	}

	try
	{
		Three.signForm(AlexPardon3);
		Three.signForm(GineRobot3);
		Three.signForm(HomeDecor3);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Three sign trouble: " << e.what() << std::endl;
	}
	try
	{
		Three.executeForm(AlexPardon3);
		Three.executeForm(GineRobot3);
		Three.executeForm(HomeDecor3);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Three sign trouble: " << e.what() << std::endl;
	}

	try
	{
		Four.signForm(AlexPardon4);
		Four.signForm(GineRobot4);
		Four.signForm(HomeDecor4);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Four sign trouble: " << e.what() << std::endl;
	}
	try
	{
		Four.executeForm(AlexPardon4);
		Four.executeForm(GineRobot4);
		Four.executeForm(HomeDecor4);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Four sign trouble: " << e.what() << std::endl;
	}

	try
	{
		Five.signForm(AlexPardon5);
		Five.signForm(GineRobot5);
		Five.signForm(HomeDecor5);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Five sign trouble: " << e.what() << std::endl;
	}
	try
	{
		Five.executeForm(AlexPardon5);
		Five.executeForm(GineRobot5);
		Five.executeForm(HomeDecor5);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Five sign trouble: " << e.what() << std::endl;
	}
}