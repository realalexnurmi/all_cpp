//
// Created by Drahff Karthus on 11/22/21.
//

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>
# include "Form.hpp"

class					Form;

class					Bureaucrat
{
public:
						~Bureaucrat() {}
						Bureaucrat(std::string name, int grade);
	int 				getGrade() const;
	const std::string	getName() const;
	void 				incGrade();
	void 				decGrade();
	void 				signForm(Form &toSign);

	class				GradeTooLowException: public std::exception
	{
	public:
		const char		*what() const throw();
	};

	class				GradeTooHighException: public std::exception
	{
	public:
		const char		*what() const throw();
	};

private:
	const std::string	_name;
	int					_grade;
	//------------------Blockers
	Bureaucrat(): _name(), _grade(0) {}
	Bureaucrat(const Bureaucrat &toCopy): _name(), _grade(0) {(void)toCopy;}
	Bureaucrat			&operator=(const Bureaucrat &toCopy) {(void)toCopy; return(*this);}
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &toPrint);

#endif //CPP05_BUREAUCRAT_HPP
