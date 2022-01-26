#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm( std::string target );
	virtual ~RobotomyRequestForm() {}

private:

	int		executeAction() const;

};

#endif
