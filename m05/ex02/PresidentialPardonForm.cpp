/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:13:52 by enena             #+#    #+#             */
/*   Updated: 2022/01/26 08:20:57 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form(),
	_target("this guy")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& init)
{

}

PresidentialPardonForm::PresidentialPardonForm&	operator=(const PresidentialPardonForm& other)
{

}


PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << _target 
		<< " has been pardoned by Zafod Beeblebrox." << std::endl;
}
