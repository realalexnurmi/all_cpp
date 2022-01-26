#ifndef INTERN_HPP
# define INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
private:
	// Creates array of funcs that return form.
	// The function finds the function by the first character.
	Form	*((*_funcArr[19]))(const std::string &);

	class	notFound : public std::exception {
	public:
		notFound(){}
		char const	*what() const throw();
	};
public:
	Intern();
	virtual ~Intern();
	Intern (Intern const &intern_copy);

	Intern &operator=(Intern const &intern_op) {
		return (*this);
	};

	Form*	makeForm(std::string formName, std::string target);
};

#endif
