/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:42:44 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 06:31:14 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm&
	init) : Form(init) {}

RobotomyRequestForm&
	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	Form::operator=(other);
	this->_target = other._target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void	RobotomyRequestForm::action(void) const
{
	srand(time(NULL));
	if (rand() % 2)
		std::cout << _target
			<< " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomized "
			<< _target << " has been failed." << std::endl;
}


