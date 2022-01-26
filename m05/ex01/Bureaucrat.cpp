/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:35:12 by enena             #+#    #+#             */
/*   Updated: 2022/01/26 07:11:47 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :
	_name("commonBur"),
	_grade(150)
{
	std::cout << *this << " Default ctor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade) :
	_name(name),
	_grade(grade)
{
	if (grade > MIN_GRADE)
		throw GradeTooLowException();
	else if (grade < MAX_GRADE)
		throw GradeTooHighException();
	std::cout << *this << " Usual ctor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& init) :
	_name(init.getName())
{
	this->operator=(init);
	std::cout << *this << " Copy ctor called!" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << *this << " Dtor called!" << std::endl;
}

Bureaucrat&			Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return *this;
	this->setGrade(other.getGrade());
	return *this;
}

const std::string&	Bureaucrat::getName(void) const
{
	return _name;
}

unsigned int		Bureaucrat::getGrade(void) const
{
	return _grade;
}

void				Bureaucrat::setGrade(unsigned int grade)
{
	_grade = grade;
}

void				Bureaucrat::incGrade(void)
{
	_grade == MAX_GRADE ? throw GradeTooHighException() : --_grade;
}

void				Bureaucrat::decGrade(void)
{
	_grade == MIN_GRADE ? throw GradeTooLowException() : ++_grade;
}

const char*			Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char*			Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

void				Bureaucrat::signForm(Form& toSign)
{
	if (toSign.isSigned())
		std::cout << *this << " couldn't sign " << toSign
			<< " because is already signed." << std::endl;
	else
	{
		try
		{
			toSign.beSigned(*this);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << *this << " couldn't sign " << toSign
				<< " because grade to sign too low." << std::endl;
		}
		if (toSign.isSigned())
			std::cout << *this << " signed " << toSign << std::endl;
	}
}

std::ostream&		operator<<(std::ostream& out, const Bureaucrat& src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}