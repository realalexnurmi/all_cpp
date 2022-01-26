/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:02:50 by pohl              #+#    #+#             */
/*   Updated: 2021/10/27 12:09:50 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ):
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
	if (RobotomyRequestForm::verbose)
		std::cout << "Standard constructor for RobotomyRequestForm called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( void ):
	Form("RobotomyRequestForm", 72, 45), _target("")
{
	if (RobotomyRequestForm::verbose)
		std::cout << "Default constructor for RobotomyRequestForm called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ):
	Form("RobotomyRequestForm", 72, 45), _target(src.getTarget())
{
	if (RobotomyRequestForm::verbose)
		std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	if (RobotomyRequestForm::verbose)
		std::cout << "Destructor for RobotomyRequestForm called" << std::endl;
	return;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	std::cout << "Can't copy anything" << std::endl;
	rhs.getTarget();
	if (RobotomyRequestForm::verbose)
		std::cout << "Assignement operator for RobotomyRequestForm called" << std::endl;
	return *this;
}

const std::string	&RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}

void	RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
	this->checkExecutability(executor);
	std::cout << "* Unbearable drilling noises *" << std::endl;
	if (std::rand() % 2)
		std::cout << "The victi... " << this->_target << " has been successfull"
			"y robotomized" << std::endl;
	else
		std::cout << "The robotomization on " << this->_target << " may or may "
			"not have been a complete and utter failure." << std::endl;
}

/* std::ostream &	operator<<( std::ostream & ostr, RobotomyRequestForm const & instance) */
/* { */
/* 	ostr << "The value of RobotomyRequestForm is..." << std::endl; */
/* 	return ostr; */
/* } */

bool	RobotomyRequestForm::verbose = false;
