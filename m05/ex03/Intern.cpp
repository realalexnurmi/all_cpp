/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:57:57 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 06:21:20 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& init)
{
	*this = init;
}

Intern::~Intern( void ) {}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

Form	*Intern::makeForm(const std::string& name,
	const std::string& target) const
{
	std::string names[3] =
		{"presidential pardon",
		"robotomy request",
		"shrubbery creation"};

	for (int i = 0; i < 3; ++i)
	{
		if (!name.compare(names[i]))
		{
			std::cout << "Intern creates " << name << std::endl;
			switch (i)
			{
				case 0:
					return (new PresidentialPardonForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new ShrubberyCreationForm(target));
			}
		}
	}
	return NULL;
}

std::ostream &	operator<<(std::ostream& out, const Intern& src)
{
	(void)src;
	out << "Intern" << std::endl;
	return out;
}
