//
// Created by Drahff Karthus on 11/23/21.
//

#include "Form.hpp"


Form::Form(std::string name, int toSign, int toExec): _name(name), _signed(false), _execGrade(toExec), _signGrade(toSign)
{
	if (toExec < 1 || toSign < 1)
		throw GradeTooHighException();
	if (toExec > 150 || toSign > 150)
		throw GradeTooLowException();
}

std::string Form::getName() const { return(_name); }

int Form::getExecGrade() const { return(_execGrade); }

int Form::getSignGrade() const { return(_signGrade); }

bool Form::getSigned() const { return(_signed); }

void Form::beSigned(const Bureaucrat &signa)
{
	if (_signGrade < signa.getGrade())
		GradeTooLowException();
	if (_signed)
	{
		std::cout << "Form <" << _name << "> is already signed!" << std::endl;
		return;
	}
	std::cout << signa.getName() << " signs " << _name << std::endl;
	_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too HIGH! (Form exception)\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW! (Form exception)\n");
}

std::ostream &operator<<(std::ostream &out, const Form &toPrint)
{
	out << "Form: " << toPrint.getName() << std::endl;
	out << "Signed: " << toPrint.getSigned() << std::endl;
	out << "Sign grade: " << toPrint.getSignGrade() << std::endl;
	out << "Exec grade: " << toPrint.getExecGrade() << std::endl;
	return (out);
}