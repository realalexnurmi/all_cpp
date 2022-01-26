//
// Created by Drahff Karthus on 11/25/21.
//

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class	Intern
{
public:
					~Intern() {}
					Intern() {}
	Form*			makeForm(const std::string &form, const std::string &target);
	class			invalidForm: public std::exception
	{
	public:
		const char*	what() const throw();
	};

private:
					Intern(const Intern &toCopy) {(void)toCopy;}
	Intern			&operator=(const Intern &toCopy) {(void)toCopy; return(*this);}
};

#endif //CPP05_INTERN_HPP
