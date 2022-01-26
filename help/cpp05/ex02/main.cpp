//
// Created by Drahff Karthus on 11/22/21.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

static void trySignExec(Bureaucrat &signa, Form &toSign)
{
	try
	{
		signa.signForm(toSign);
		signa.executeForm(toSign);
	}
	catch (std::exception &any)
	{
		std::cout << any.what() << std::endl;
	}
}

int	main()
{
	Bureaucrat    high("HIGHmighster", 4);
	Bureaucrat    low("LOWdelda", 135);
	PresidentialPardonForm form1("Mr'N");
	RobotomyRequestForm form2("Mr'Pink");
	ShrubberyCreationForm form3("Highland");

	std::cout << high << "---will try to sign---\n" << form1 << form2 << form3 << std::endl;

	trySignExec(low, form1);
	trySignExec(low, form2);
	trySignExec(low, form3);
	trySignExec(high, form1);
	trySignExec(high, form2);
	trySignExec(high, form3);
	return (0);
}