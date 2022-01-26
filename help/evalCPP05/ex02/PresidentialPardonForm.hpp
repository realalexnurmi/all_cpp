#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	int		executeAction() const;
public:
	virtual ~PresidentialPardonForm(){}
	PresidentialPardonForm(std::string target);
};

#endif
