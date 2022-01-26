//
// Created by Drahff Karthus on 11/24/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): \
	Form("PresidentialPardonForm", 25, 5), _target(target) {}

void PresidentialPardonForm::action() const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
