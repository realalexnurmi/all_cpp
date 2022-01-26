/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:35:40 by pohl              #+#    #+#             */
/*   Updated: 2021/10/27 11:55:58 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:

	Form( const std::string &name, int gradeToSign, int gradeToExecute );
	Form( const Form &src );
	~Form( void );

	Form	&operator=( const Form &rhs );

	const std::string	&getName( void ) const;
	int					getSignGrade( void ) const;
	int					getExecuteGrade( void ) const;
	bool				isSigned( void ) const;

	void	checkGrades( void ) const ;
	void	checkExecutability( const Bureaucrat &bureaucrat ) const ;
	bool	beSigned( const Bureaucrat &bureaucrat );

	static bool	verbose;

private:

	Form( void );

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

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

	class CantExecuteForm : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The form can't be executed");
		}
	};

};

std::ostream	&operator<<( std::ostream &ostr, const Form &instance );

#endif
