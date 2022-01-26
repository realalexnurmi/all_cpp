//
// Created by Drahff Karthus on 11/22/21.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int	main()
{
	Intern Marvin;
	Form* ret;

	try
	{
		ret = Marvin.makeForm("Robotomy Request", "Bilbo Baggins");
		ret->action();
		delete ret;
	}
	catch (std::exception &any)
	{
		std::cout << "FIRST" << std::endl;
		std::cout << any.what() << std::endl;
	}
	try
	{
		ret = Marvin.makeForm("Any Request", "Dummy Target");
		ret->action();
		delete ret;
	}
	catch (std::exception &any)
	{
		std::cout << "SECOND" << std::endl;
		std::cout << any.what() << std::endl;
	}
	return (0);
}