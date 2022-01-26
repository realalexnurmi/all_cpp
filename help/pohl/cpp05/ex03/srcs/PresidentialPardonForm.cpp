/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:02:50 by pohl              #+#    #+#             */
/*   Updated: 2021/10/13 14:28:39 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ):
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	if (PresidentialPardonForm::verbose)
		std::cout << "Standard constructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( void ):
	Form("PresidentialPardonForm", 25, 5), _target("")
{
	if (PresidentialPardonForm::verbose)
		std::cout << "Default constructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ):
	Form("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
	if (PresidentialPardonForm::verbose)
		std::cout << "Copy constructor for PresidentialPardonForm called" << std::endl;
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	if (PresidentialPardonForm::verbose)
		std::cout << "Destructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	std::cout << "Can't copy anything" << std::endl;
	rhs.getTarget();
	if (PresidentialPardonForm::verbose)
		std::cout << "Assignement operator for PresidentialPardonForm called" << std::endl;
	return *this;
}

const std::string	&PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}

void	PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	this->checkExecutability(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox."
		<< std::endl;
}

/* std::ostream &	operator<<( std::ostream & ostr, PresidentialPardonForm const & instance) */
/* { */
/* 	ostr << "The value of PresidentialPardonForm is..." << std::endl; */
/* 	return ostr; */
/* } */

bool	PresidentialPardonForm::verbose = false;
