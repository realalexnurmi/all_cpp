//
// Created by Drahff Karthus on 11/24/21.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
public:
							~ShrubberyCreationForm() {}
							ShrubberyCreationForm(const std::string &target);
	void					action() const;

private:
	const std::string		_target;
							ShrubberyCreationForm() {}
							ShrubberyCreationForm(const ShrubberyCreationForm &toCopy) {(void)toCopy;}
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &toCopy) {(void)toCopy; return(*this);}
};

#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
