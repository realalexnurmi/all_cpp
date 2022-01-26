
#ifndef BUREUCRAT_HPP
# define BUREUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	std::string	_name;
	int			_grade;

public:
	Bureaucrat(std::string name = "Mekan", int grade = 150);
	virtual ~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &bure_op);
	Bureaucrat(const Bureaucrat &bure_copy);

	std::string getName() const;
	int getGrade() const;
	void incGrade(void);
	void decGrade(void);

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException(){}
		char const	*what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException(){}
		char const	*what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bure);

#endif
