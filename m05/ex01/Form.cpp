/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 05:09:49 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 00:27:05 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(void) :
	_name("simpleForm"),
	_signed(false),
	_gradeSign(150),
	_gradeExecute(150)
{
	std::cout << *this << " Default ctor called!" << std::endl;
}

Form::Form(const std::string& name, unsigned int gradeSign,
	unsigned int gradeExecute) :
	_name(name),
	_signed(false),
	_gradeSign(gradeSign),
	_gradeExecute(gradeExecute)
{
	if (gradeSign > MIN_GRADE || gradeExecute > MIN_GRADE)
		throw GradeTooLowException();
	else if (gradeSign < MAX_GRADE || gradeExecute < MAX_GRADE)
		throw GradeTooHighException();
	std::cout << *this << " Usual ctor called!" << std::endl;
}

Form::Form(const Form& init) :
	_name(init.getName()),
	_signed(init.isSigned()),
	_gradeSign(init.getGradeSign()),
	_gradeExecute(init.getGradeExecute())
{
	std::cout << *this << " Copy ctor called!" << std::endl;
}

Form::~Form(void)
{
	std::cout << *this << " Dtor called!" << std::endl;
}

Form&				Form::operator=(const Form& other)
{
	if (this == &other)
		return *this;
	this->_signed = other.isSigned();
	return *this;
}

const std::string&	Form::getName(void) const
{
	return _name;
}

unsigned int		Form::getGradeSign(void) const
{
	return _gradeSign;
}

unsigned int		Form::getGradeExecute(void) const
{
	return _gradeExecute;
}

bool				Form::isSigned(void) const
{
	return _signed;
}

const char*			Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char*			Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

void				Form::beSigned(const Bureaucrat& signat)
{
	if (signat.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	else
		_signed = true;
}

std::ostream&		operator<<(std::ostream& out, const Form& src)
{
	out << "Form \"" << src.getName()
		<< "\" with grade to sign " << src.getGradeSign()
		<< " and grade to execute " << src.getGradeExecute();
	out << (src.isSigned() ? " {SIGNED}" : " {UNSIGNED}"); 
	return out;
}
