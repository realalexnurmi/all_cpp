#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
Form (target, "RobotomyRequestForm", false, 72, 45) {}

int		RobotomyRequestForm::executeAction() const {
	system("./noise.sh");
	std::cout<< this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
	return (1);
}
