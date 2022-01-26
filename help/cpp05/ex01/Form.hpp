//
// Created by Drahff Karthus on 11/23/21.
//

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>
# include "Bureaucrat.hpp"

class					Bureaucrat;

class					Form
{
public:
						~Form() {}
						Form(std::string name, int toSign, int toExec);
	int					getSignGrade() const;
	int					getExecGrade() const;
	bool 				getSigned() const;
	std::string			getName() const;
	void 				beSigned(const Bureaucrat &signa);
	class GradeTooLowException: public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooHighException: public std::exception
	{
	public:
		const char *what() const throw();
	};

private:
	const std::string	_name;
	bool		 		_signed;
	const int			_execGrade;
	const int			_signGrade;
	//------------------Blockers
						Form(): _name(), _signed(0), _execGrade(0), _signGrade(0) {}
						Form(const Form &toCopy): _name(), _signed(0), _execGrade(0), _signGrade(0) {(void)toCopy;}
	Form				&operator=(const Form &toCopy) {(void)toCopy; return(*this);}
};

std::ostream &operator<<(std::ostream &out, const Form &toPrint);

#endif //CPP05_FORM_HPP