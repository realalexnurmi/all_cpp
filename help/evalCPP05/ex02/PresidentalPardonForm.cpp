#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
Form( target, "PresidentalPardonForm", false, 25, 5) {}

int			PresidentialPardonForm::executeAction() const {
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return (1);
}
