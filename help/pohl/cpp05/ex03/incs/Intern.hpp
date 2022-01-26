/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:57:54 by pohl              #+#    #+#             */
/*   Updated: 2021/10/14 09:23:57 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

public:

	Intern( void );
	Intern( const Intern &src );
	~Intern( void );

	Intern	&operator=( const Intern &rhs );

	Form	*makeForm(const std::string &formName, const std::string &target) const;

	static bool	verbose;

private:

	typedef struct	s_formList
	{
		std::string	formName;
		Form		*formType;
	}				t_formList;
};

std::ostream	&operator<<( std::ostream &ostr, const Intern &instance );

#endif
