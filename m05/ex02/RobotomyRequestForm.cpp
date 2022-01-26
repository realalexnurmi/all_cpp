//
// Created by Drahff Karthus on 11/24/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): \
	Form("RobotomyRequestForm", 72, 45), _target(target) {}

void RobotomyRequestForm::action() const
{
	if (arc4random() % 2)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "FAIL to robotomiz " << _target << ", subject has suffered painful DEATH!" << std::endl;
}
