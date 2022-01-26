/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeAnalyst.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:23:53 by pohl              #+#    #+#             */
/*   Updated: 2021/10/21 16:19:02 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TYPEANALYST_HPP
# define TYPEANALYST_HPP

# include <iostream>
# include <stdexcept>

class TypeAnalyst
{

public:

	TypeAnalyst( void );
	TypeAnalyst( char *input );
	TypeAnalyst( const TypeAnalyst &src );
	~TypeAnalyst( void );

	TypeAnalyst	&operator=( const TypeAnalyst &rhs );

	void	analyseNewInput( char *input );
	void	printTypes( void );

	static bool	verbose;

private:

	int		_selectedType;
	char	_charScalar;
	int		_intScalar;
	float	_floatScalar;
	double	_doubleScalar;

	void	resetValues( void );
	bool	getType( char *input );
	void	setVariable( char *input );
	int		handle_special_cases( char *input ) const;
	int		handle_numeric_values( char *input ) const;
	void	printChar( void );
	bool	canConvertToChar( double number );
	void	printInt( void );
	void	printFloat( void );
	void	printDouble( void );

	static const int noType = -1;
	static const int charType = 0;
	static const int intType = 1;
	static const int floatType = 2;
	static const int doubleType = 3;

public:

	class EmptyInput: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "Please enter an input to be analysed by the converter";
		}
	};

	class CannotAnalyse: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "The input is not a valid char, int, float or double";
		}
	};

};

#endif
