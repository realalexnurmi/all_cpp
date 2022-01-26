/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:35:40 by pohl              #+#    #+#             */
/*   Updated: 2021/10/13 14:45:59 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string &name, int gradeToSign, int gradeToExecute ):
	_name(name), _isSigned(false), _gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	this->checkGrades();
	if (Form::verbose)
		std::cout << "Standard constructor for Form called" << std::endl;
	return;
}

Form::Form( void ): _name(""), _isSigned(false),
	_gradeToSign(Form::lowestGrade), _gradeToExecute(Form::lowestGrade)
{
	if (Form::verbose)
		std::cout << "Default constructor for Form called" << std::endl;
	return;
}

Form::Form( Form const & src ): _name(src.getName()), _isSigned(src.isSigned()),
	_gradeToSign(src.getSignGrade()), _gradeToExecute(src.getExecuteGrade())
{
	if (Form::verbose)
		std::cout << "Copy constructor for Form called" << std::endl;
	*this = src;
	return;
}

Form::~Form( void )
{
	if (Form::verbose)
		std::cout << "Destructor for Form called" << std::endl;
	return;
}

Form	&Form::operator=( Form const & rhs )
{
	this->_isSigned = rhs._isSigned;
	std::cout << "Name and grades are const and can't be overwritten, only isSi"
		"gned was copied" << std::endl;
	if (Form::verbose)
		std::cout << "Assignement operator for Form called" << std::endl;
	return *this;
}

const std::string	&Form::getName( void ) const
{
	return this->_name;
}

int	Form::getSignGrade( void ) const
{
	return this->_gradeToSign;
}

int	Form::getExecuteGrade( void ) const
{
	return this->_gradeToExecute;
}

bool	Form::isSigned( void ) const
{
	return this->_isSigned;
}

void	Form::checkGrades( void ) const
{
	if (this->_gradeToExecute < Form::highestGrade
			|| this->_gradeToSign < Form::highestGrade)
		throw Form::GradeTooHighException();
	if (this->_gradeToExecute > Form::lowestGrade
			|| this->_gradeToSign > Form::lowestGrade)
		throw Form::GradeTooLowException();
}

bool	Form::beSigned( const Bureaucrat &bureaucrat )
{
	if (bureaucrat.getGrade() < this->_gradeToSign)
	{
		this->_isSigned = true;
		return true;
	}
	else
	{
		this->_isSigned = false;
		return false;
	}
}

void	Form::checkExecutability( const Bureaucrat &executor ) const
{
	if (!this->_isSigned || executor.getGrade() > this->_gradeToExecute)
		throw Form::CantExecuteForm();
}

std::ostream &	operator<<( std::ostream & ostr, Form const & instance)
{
	ostr << instance.getName() << " Form has to be signed by a "
		<< instance.getSignGrade() << " grade and executed by a "
		<< instance.getExecuteGrade() << " grade, it is "
		<< ((instance.isSigned()) ? "" : "not ") << "signed";
	return ostr;
}

bool	Form::verbose = false;
