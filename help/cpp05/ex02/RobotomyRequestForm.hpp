//
// Created by Drahff Karthus on 11/24/21.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
public:
							~RobotomyRequestForm() {}
							RobotomyRequestForm(const std::string &target);
	void					action() const;

private:
	const std::string		_target;
							RobotomyRequestForm() {}
							RobotomyRequestForm(const RobotomyRequestForm &toCopy) {(void)toCopy;}
	RobotomyRequestForm		&operator=(const RobotomyRequestForm &toCopy) {(void)toCopy; return(*this);}
};

#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
