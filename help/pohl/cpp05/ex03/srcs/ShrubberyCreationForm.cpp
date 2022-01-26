/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:02:50 by pohl              #+#    #+#             */
/*   Updated: 2021/10/27 12:10:42 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ):
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "Standard constructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ):
	Form("ShrubberyCreationForm", 145, 137), _target("")
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ):
	Form("ShrubberyCreationForm", 145, 137), _target(src.getTarget())
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	std::cout << "Can't copy anything" << std::endl;
	rhs.getTarget();
	if (ShrubberyCreationForm::verbose)
		std::cout << "Assignement operator for ShrubberyCreationForm called" << std::endl;
	return *this;
}

const std::string	&ShrubberyCreationForm::getTarget( void ) const
{
	return this->_target;
}

void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
	std::ofstream	myfile;
	std::string		fileName = this->_target + "_shrubbery";

	this->checkExecutability(executor);
	myfile.open(fileName.c_str(), std::ios::out);
	myfile << "      ,.," << std::endl;
	myfile << "      MMMM_    ,..," << std::endl;
	myfile << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
	myfile << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
	myfile << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
	myfile << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
	myfile << "        ,., _\"__ \\__./ .\"" << std::endl;
	myfile << "       MMMMM_\"  \"_    ./" << std::endl;
	myfile << "        ''''      (    )" << std::endl;
	myfile << " ._______________.-'____\"---._." << std::endl;
	myfile << "  \\                          /" << std::endl;
	myfile << "   \\________________________/" << std::endl;
	myfile << "   (_)                    (_)" << std::endl;
	myfile.close();
	std::cout << "Created the shrug in " << this->_target << "_shrubbery"
		<< std::endl;
}

/* std::ostream &	operator<<( std::ostream & ostr, ShrubberyCreationForm const & instance) */
/* { */
/* 	ostr << "The value of ShrubberyCreationForm is..." << std::endl; */
/* 	return ostr; */
/* } */

bool	ShrubberyCreationForm::verbose = false;
