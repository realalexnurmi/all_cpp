/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:45:38 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 06:14:14 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# define COUNT_FORM	3

class Intern
{
public:
	Intern(void);
	Intern(const Intern& init);
	~Intern(void);

	Intern&	operator=(const Intern& other);

	Form*	makeForm(const std::string& name, const std::string& target) const;
};

std::ostream&	operator<<(std::ostream& out, const Intern& src);

#endif