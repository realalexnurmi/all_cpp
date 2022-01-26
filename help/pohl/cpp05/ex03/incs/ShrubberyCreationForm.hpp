/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:02:50 by pohl              #+#    #+#             */
/*   Updated: 2021/10/13 15:12:19 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{

public:

	ShrubberyCreationForm( const std::string &target );
	ShrubberyCreationForm( const ShrubberyCreationForm &src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &rhs );

	const std::string	&getTarget( void ) const;
	virtual void		execute( const Bureaucrat &executor ) const;

	static bool	verbose;

private:

	const std::string		_target;

	ShrubberyCreationForm( void );

};

/* std::ostream	&operator<<( std::ostream &ostr, const ShrubberyCreationForm &instance ); */

#endif
