/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:44:43 by pohl              #+#    #+#             */
/*   Updated: 2021/10/13 14:10:36 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{

public:

	Bureaucrat( const std::string &name, int grade );
	Bureaucrat( const Bureaucrat &src );
	~Bureaucrat( void );

	Bureaucrat	&operator=( const Bureaucrat &rhs );

	const std::string	&getName( void ) const;
	int					getGrade( void ) const;

	void	incrementGrade( int quantity );
	void	decrementGrade( int quantity );
	bool	signForm( Form &form ) const;
	bool	executeForm( const Form &form ) const;

	static bool	verbose;

private:

	const std::string	_name;
	int					_grade;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

	Bureaucrat( void );
	void	checkGrade( void ) const ;

public:

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade you set is too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade you set is too low");
		}
	};

};

std::ostream	&operator<<( std::ostream &ostr, const Bureaucrat &instance );

#endif
