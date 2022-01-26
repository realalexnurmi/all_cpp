//
// Created by Drahff Karthus on 11/25/21.
//

#include "Intern.hpp"

Form*		Intern::makeForm(const std::string &form, const std::string &target)
{
	std::string forms[3] = {"Presidential Pardon","Robotomy Request","Shrubbery Creation"};

	for (int i = 0; i < 3; ++i)
	{
		if (!form.compare(forms[i]))
		{
			switch (i)
			{
				case 0:
					return (new PresidentialPardonForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new ShrubberyCreationForm(target));
			}
		}
	}
	throw(invalidForm());
}

const char*	Intern::invalidForm::what() const throw()
{
	return ("Invalid form request!");
}