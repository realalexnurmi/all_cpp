/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:13:52 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 04:27:42 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm&
	init) : Form(init) {}

PresidentialPardonForm&
	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	Form::operator=(other);
	this->_target = other._target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void	PresidentialPardonForm::action(void) const
{
	std::cout << _target 
		<< " has been pardoned by Zafod Beeblebrox." << std::endl;
}
