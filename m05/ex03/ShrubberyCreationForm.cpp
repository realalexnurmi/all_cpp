/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:33:06 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 04:27:28 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm&
	init) : Form(init) {}

ShrubberyCreationForm&
	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	Form::operator=(other);
	this->_target = other._target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream out;
	
	if (out.is_open())
		out.close();
	out.open((_target + "_shrubbery").c_str(),
		std::ofstream::out | std::ofstream::trunc);
	out << "          =-/" << std::endl;
	out << " \\|/        \\ /" << std::endl;
	out << "  \\ |  //_  //-<_" << std::endl;
	out << " =--\\// \\|//-=" << std::endl;
	out << "      \\////_" << std::endl;
	out << "       |||/" << std::endl;
	out << "       ||||" << std::endl;
	out << " .....//|||\\...." << std::endl;
	out.close();
}