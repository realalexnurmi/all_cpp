//
// Created by Drahff Karthus on 11/22/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat    Bob("VogRon", 42);
	Form form("diploma", 10, 5);
	std::cout << Bob << "---will try to sign---\n" << form << std::endl;
	try
	{
		for(int i = 0; i <= 150; i++)
		{
			Bob.incGrade();
			Bob.signForm(form);
			std::cout << Bob << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}