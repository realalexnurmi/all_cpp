#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <fstream>

class Bureaucrat;

enum sign
{
	notSign = 0,
	sign,
	outOfRange
};

class Form
{
private:
	std::string _target;
	std::string _name;
	bool _sign;
	int const _gradeRequire;
	int const _gradeExecute;

protected:
	virtual int			executeAction() const = 0;

public:
	Form(std::string target = "Kek", std::string name = "Mekan", bool sign = false, int gradeRequire = 1, int gradeExecute = 1);
	Form(Form const &form_copy);
	Form &operator=(Form const &form_op);
	virtual ~Form(){};

	std::string const	getName() const;
	std::string			getTarget() const;
	int const			getRequiredGrade() const;
	int const			getExecutionGrade() const;
	bool				getSign() const;

	int beSigned(Bureaucrat const &bure);
	int	execute( Bureaucrat const & executor) const ;

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException(){};
		char const *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException(){};
		char const *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream & out, Form const &form);

#endif
