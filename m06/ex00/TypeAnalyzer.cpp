/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeAnalyzer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:23:53 by pohl              #+#    #+#             */
/*   Updated: 2022/01/29 13:47:56 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeAnalyzer.hpp"

const std::string TypeAnalyzer::floatSpecial[SPECIAL_VALUES_COUNT] =
	{"inff", "+inff", "-inff", "nanf"};
const std::string TypeAnalyzer::doubleSpecial[SPECIAL_VALUES_COUNT] =
	{"inf", "+inf", "-inf", "nan"};

TypeAnalyzer::TypeAnalyzer(void)
{
	this->resetET(NULL);
}

TypeAnalyzer::TypeAnalyzer(char* input)
{
	this->resetET(input);
}

TypeAnalyzer::TypeAnalyzer(const TypeAnalyzer& init)
{
	operator=(init);
}

TypeAnalyzer::~TypeAnalyzer(void)
{
}

TypeAnalyzer&			TypeAnalyzer::operator=(const TypeAnalyzer& other)
{
	if (this == &other)
		return *this;
	this->_selType = other._selType;
	this->_charRez = other._charRez;
	this->_intRez = other._intRez;
	this->_floatRez = other._floatRez;
	this->_doubleRez = other._doubleRez;
	return *this;
}

void					TypeAnalyzer::analyzeNewInput(char* input)
{
	this->resetET(input);
	this->analyzeInput();
}

void					TypeAnalyzer::printRezult(void) const
{
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}

void					TypeAnalyzer::analyzeInput(void)
{
	if (this->_input == NULL)
		throw TypeAnalyzer::EmptyInput();
	if (this->selectET() == false)
		throw TypeAnalyzer::NotAnalyze();
	this->setValues();
}

void					TypeAnalyzer::resetET(char* input)
{
	this->_input = input;
	this->_selType = noneET;
	this->_charRez = 0;
	this->_intRez = 0;
	this->_floatRez = 0.0f;
	this->_doubleRez = 0.0;
}

bool					TypeAnalyzer::selectET(void)
{
	bool ret = false;

	this->_selType = this->handleFloatingSpecial();
	if (this->_selType != noneET)
		ret = true;
	if (!ret)
	{
		if (std::isdigit(this->_input[0])
			|| this->_input[0] == '-' || this->_input[0] == '+'
			|| this->_input[0] == '.')
			this->_selType = handleNumeric();
		if (this->_selType != noneET)
		ret = true;
	}
	if (!(ret || this->_input[1]))
	{
		ret = true;
		this->_selType = charET;
	}
	return ret;
}

void					TypeAnalyzer::setValues(void)
{
	switch (this->_selType)
	{
	case charET:
		this->_charRez = this->_input[0];
		break;
	case intET:
		this->_intRez = atoi(this->_input);
		break;
	case floatET:
		this->_floatRez = (float)atof(this->_input);
		break;
	case doubleET:
		this->_doubleRez = atof(this->_input);
		break;
	default:
		std::cout << "unknown type";
	}
}

TypeAnalyzer::t_type	TypeAnalyzer::handleFloatingSpecial(void)
{
	TypeAnalyzer::t_type	ret = noneET;
	ssize_t					i = -1;

	while (ret == noneET && ++i < SPECIAL_VALUES_COUNT)
	{
		if (floatSpecial[i] == this->_input)
			ret = floatET;
		if (doubleSpecial[i] == this->_input)
			ret = doubleET;
	}
	return ret;
}

TypeAnalyzer::t_type	TypeAnalyzer::handleNumeric(void)
{
	TypeAnalyzer::t_type	ret = noneET;
	int	i = 0;
	int	dotCount = 0;

	if ((this->_input[0] == '-' || this->_input[0] == '+') && this->_input[1])
		i++;
	if (!(this->_input[i] == '.'
		&& (this->_input[i + 1] == 'f' || this->_input[i + 1] == 0)))
	{
		while (this->_input[i] == '.' || std::isdigit(this->_input[i]))
		{
			if (this->_input[i] == '.')
				dotCount++;
			if (dotCount > 1)
				break;
			i++;
		}
		if (!this->_input[i])
		{
			if (dotCount == 1)
				ret = doubleET;
			if (dotCount == 0)
				ret = intET;
		}
		else if (this->_input[i] == 'f'
				&& !this->_input[i + 1] && dotCount == 1)
				ret = floatET;
	}
	return ret;
}

bool					TypeAnalyzer::possibleToChar(const double value) const
{
	bool	ret = true;

	if (value - static_cast<int>(value) != 0 || value > 127 || value < 0)
	{
		std::cout << "impossible";
		ret = false;
	}
	if (ret && !(std::isprint(value)))
	{
		std::cout << "Non displayable";
		ret = false;
	}
	return ret;
}

bool		TypeAnalyzer::possibleToInt(const double value) const
{
	bool ret;

	ret = (value <= std::numeric_limits<int>::max()
			&& value >= std::numeric_limits<int>::min()
			&& value != std::numeric_limits<double>::infinity()
			&& value != -std::numeric_limits<double>::infinity()
			&& value != std::numeric_limits<double>::quiet_NaN());
	if (!ret)
		std::cout << "impossible";
	return ret;
}

bool		TypeAnalyzer::possibleToFloat(const double value) const
{
	bool	ret;

	ret = ((value <= std::numeric_limits<float>::max()
			&& value >= -std::numeric_limits<float>::max())
			|| value == std::numeric_limits<double>::infinity()
			|| value == -std::numeric_limits<double>::infinity()
			|| std::isnan(value));
	if (!ret)
		std::cout << "impossible";
	return ret;
}

void					TypeAnalyzer::printChar(void) const
{
	std::cout << "char: ";
	switch (this->_selType)
	{
	case charET:
		std::cout << static_cast<char>(this->_charRez);
		break;
	case intET:
		if (this->possibleToChar(_intRez))
			std::cout << static_cast<char>(this->_intRez);
		break;
	case floatET:
		if (this->possibleToChar(_floatRez))
			std::cout << static_cast<char>(this->_floatRez);
		break;
	case doubleET:
		if (this->possibleToChar(_doubleRez))
			std::cout << static_cast<char>(this->_doubleRez);
		break;
	default:
		throw TypeAnalyzer::NotAnalyze();
	}
	std::cout << std::endl;
}

void					TypeAnalyzer::printInt(void) const
{
	std::cout << "int: ";
	switch (this->_selType)
	{
	case charET:
		std::cout << static_cast<int>(this->_charRez);
		break;
	case intET:
		std::cout << static_cast<int>(this->_intRez);
		break;
	case floatET:
		if (this->possibleToInt(_floatRez))
			std::cout << static_cast<int>(this->_floatRez);
		break;
	case doubleET:
		if (this->possibleToInt(_doubleRez))
			std::cout << static_cast<int>(this->_doubleRez);
		break;
	default:
		throw TypeAnalyzer::NotAnalyze();
		break;
	}
	std::cout << std::endl;
}

void					TypeAnalyzer::printFloat(void) const
{
	bool needF = true;

	std::cout << "float: ";
	switch (this->_selType)
	{
	case charET:
		std::cout << static_cast<float>(this->_charRez);
		break;
	case intET:
		std::cout << static_cast<float>(this->_intRez);
		break;
	case floatET:
		std::cout << static_cast<float>(this->_floatRez);
		break;
	case doubleET:
		if (this->possibleToFloat(_doubleRez))
			std::cout << static_cast<float>(this->_doubleRez);
		else
			needF = false;
		break;
	default:
		throw TypeAnalyzer::NotAnalyze();
		break;
	}
	if (this->_selType != noneET)
		this->addDot(needF);
	std::cout << std::endl;
}

void					TypeAnalyzer::printDouble(void) const
{
	std::cout << "double: ";
	switch (this->_selType)
	{
	case charET:
		std::cout << static_cast<double>(this->_charRez);
		break;
	case intET:
		std::cout << static_cast<double>(this->_intRez);
		break;
	case floatET:
		std::cout << static_cast<double>(this->_floatRez);
		break;
	case doubleET:
		std::cout << static_cast<double>(this->_doubleRez);
		break;
	default:
		throw TypeAnalyzer::NotAnalyze();
		break;
	}
	if (this->_selType != noneET)
		this->addDot(false);
	std::cout << std::endl;
}

void					TypeAnalyzer::addDot(bool f) const
{
	double dd;

	dd = atof(this->_input);
	if ((dd - atoi(this->_input) == 0.0) && (dd < 1e+06f && dd > -1e+06f))
		std::cout << ".0";
	if (f)
		std::cout << "f";
}

void					TypeAnalyzer::help(void) const
{
	std::cout << "./convert {char, int, float or double literal}" << std::endl;
}
