#include "Intern.hpp"

Form		*presidentialForm( std::string const & target ) {
	return (new PresidentialPardonForm( target ));
}

Form		*shrubberyForm( std::string const & target )  {
	return (new ShrubberyCreationForm( target ));
}

Form		*robotomyForm( std::string const & target )  {
	return (new RobotomyRequestForm( target ));
}

Intern::Intern() {
	_funcArr['P' - 'A'] = presidentialForm;
	_funcArr['S' - 'A'] = shrubberyForm;
	_funcArr['R' - 'A'] = robotomyForm;
}

Intern::~Intern() {
	std::cout << "Intern Constructor" << std::endl;
}

Intern::Intern(const Intern &intern_copy) {
	std::cout << "Intern copy Constructor" << std::endl;
}

Form		*Intern::makeForm(std::string formName, std::string target){
	if (formName[0] != 's' && formName[0] != 'r' && formName[0] != 'p') {
		throw notFound();
	}
	return (_funcArr[formName[0] - 'a'](target));
}

char const	*Intern::notFound::what() const throw(){
	return ("form does not exist!");
}
