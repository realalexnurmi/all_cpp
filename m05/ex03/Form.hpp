/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 05:09:45 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 05:03:12 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

# define MAX_GRADE	1
# define MIN_GRADE	150

class	Bureaucrat;

class Form
{
private:
	std::string			_name;
	bool				_signed;
	const unsigned int	_gradeSign;
	const unsigned int	_gradeExecute;

public:
	Form(void);
	Form(const Form& init);
	Form(const std::string& name, unsigned int gradeSign, 
		unsigned int gradeExecute);
	virtual	~Form(void);

	Form&				operator=(const Form& other);

	class GradeTooHighException : public std::exception
	{
	public:
		const char*		what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char*		what() const throw();
	};

	const std::string&	getName(void) const;
	unsigned int		getGradeSign(void) const;
	unsigned int		getGradeExecute(void) const;
	bool				isSigned(void) const;
	void				beSigned(const Bureaucrat& signat);
	void				execute(const Bureaucrat& executor) const;
	virtual void		action(void) const = 0;
};

std::ostream&			operator<<(std::ostream& out, const Form& src);

#endif