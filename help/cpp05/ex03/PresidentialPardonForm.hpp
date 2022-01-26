//
// Created by Drahff Karthus on 11/24/21.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
public:
							~PresidentialPardonForm() {}
							PresidentialPardonForm(const std::string &target);
	void					action() const;

private:
	const std::string		_target;
							PresidentialPardonForm() {}
							PresidentialPardonForm(const PresidentialPardonForm &toCopy) {(void)toCopy;}
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &toCopy) {(void)toCopy; return(*this);}

};

#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
