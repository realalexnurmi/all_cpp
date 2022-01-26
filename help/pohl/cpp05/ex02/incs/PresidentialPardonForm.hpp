/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:02:50 by pohl              #+#    #+#             */
/*   Updated: 2021/10/13 14:27:24 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{

public:

	PresidentialPardonForm( const std::string &target );
	PresidentialPardonForm( const PresidentialPardonForm &src );
	~PresidentialPardonForm( void );

	PresidentialPardonForm	&operator=( const PresidentialPardonForm &rhs );

	const std::string	&getTarget( void ) const;
	virtual void		execute( const Bureaucrat &executor ) const;

	static bool	verbose;

private:

	const std::string		_target;

	PresidentialPardonForm( void );

};

/* std::ostream	&operator<<( std::ostream &ostr, const PresidentialPardonForm &instance ); */

#endif
