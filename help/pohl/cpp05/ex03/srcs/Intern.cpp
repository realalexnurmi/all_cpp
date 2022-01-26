/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:57:54 by pohl              #+#    #+#             */
/*   Updated: 2021/10/27 12:10:57 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	if (Intern::verbose)
		std::cout << "Default constructor for Intern called" << std::endl;
	return;
}

Intern::Intern( Intern const & src )
{
	if (Intern::verbose)
		std::cout << "Copy constructor for Intern called" << std::endl;
	*this = src;
	return;
}

Intern::~Intern( void )
{
	if (Intern::verbose)
		std::cout << "Destructor for Intern called" << std::endl;
	return;
}

Intern &	Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	if (Intern::verbose)
		std::cout << "Assignement operator for Intern called" << std::endl;
	return *this;
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target) const
{
	t_formList forms[] = 
	{
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
		{ "", NULL }
	};
	Form	*resultForm = NULL;

	for (int i = 0; forms[i].formType != NULL; i++)
	{
		if (forms[i].formName == formName)
			resultForm = forms[i].formType;
		else
			delete forms[i].formType;
	}
	if (resultForm == NULL)
		std::cout << "Intern did not find the form " << formName << std::endl;
	else
		std::cout << "Intern creates " << formName << std::endl;
	return resultForm;
}

std::ostream &	operator<<( std::ostream & ostr, Intern const & instance)
{
	(void)instance;
	ostr << "Intern" << std::endl;
	return ostr;
}

bool	Intern::verbose = false;
