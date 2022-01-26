/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:36:32 by enena             #+#    #+#             */
/*   Updated: 2022/01/26 07:12:23 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <stdexcept>

# define MAX_GRADE	1
# define MIN_GRADE	150

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int		_grade;
	void				setGrade(unsigned int grade);
public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat& init);
	Bureaucrat(const std::string& name, unsigned int grade);
	~Bureaucrat(void);
	
	Bureaucrat&			operator=(const Bureaucrat& other);

	class GradeTooHighException : public std::exception
	{
	public:
		const char*	what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char*	what() const throw();
	};

	const std::string&	getName(void) const;
	unsigned int		getGrade(void) const;
	void				incGrade(void);
	void				decGrade(void);
};

std::ostream&			operator<<(std::ostream& out, const Bureaucrat& src);

#endif
