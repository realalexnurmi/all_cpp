//
// Created by Drahff Karthus on 11/22/21.
//

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat    test("VogRon", 42);

	try
	{
		for(int i = 0; i <= 150; i++)
		{
			//test.incGrade();
			test.decGrade();
			std::cout << test << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}