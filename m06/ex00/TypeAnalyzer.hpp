/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeAnalyzer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:23:53 by pohl              #+#    #+#             */
/*   Updated: 2022/01/29 13:24:24 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TYPEANALYZER_HPP
# define TYPEANALYZER_HPP

# include <cmath>
# include <string>
# include <iostream>
# include <stdexcept>
# include <limits>
# define SPECIAL_VALUES_COUNT 4

class TypeAnalyzer
{
private:
	typedef	enum e_type
	{
		noneET = -1,
		charET,
		intET,
		floatET,
		doubleET
	}	t_type;
	t_type		_selType;
	char		_charRez;
	int			_intRez;
	float		_floatRez;
	double		_doubleRez;
	char*		_input;
	static const std::string	floatSpecial[SPECIAL_VALUES_COUNT];
	static const std::string	doubleSpecial[SPECIAL_VALUES_COUNT];

	void		resetET(char* input);
	bool		selectET(void);
	void		setValues(void);
	t_type		handleFloatingSpecial(void);
	t_type		handleNumeric(void);
	bool		possibleToChar(const double value) const;
	bool		possibleToInt(const double value) const;
	bool		possibleToFloat(const double value) const;
	void		printChar(void) const;
	void		printInt(void) const;
	void		printFloat(void) const;
	void		printDouble(void) const;
	void		addDot(bool f) const;
	
public:
	TypeAnalyzer(void);
	TypeAnalyzer(char *input);
	TypeAnalyzer(const TypeAnalyzer &src);
	~TypeAnalyzer(void);

	TypeAnalyzer	&operator=( const TypeAnalyzer &rhs );

	void		setInput(char* input);
	void		analyzeInput(void);
	void		analyzeNewInput(char* input);
	void		printRezult(void) const;
	void		help(void) const;

	class EmptyInput : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Empty input do not allowed!";
		}
	};

	class NotAnalyze : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Not a valid char, int, float or double for analyze!";
		}
	};

};

#endif
