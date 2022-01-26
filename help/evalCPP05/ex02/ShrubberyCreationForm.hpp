#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form {
private:
	int							executeAction() const;
	static std::string const	_tree;

public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm(){};
	ShrubberyCreationForm (ShrubberyCreationForm const & shrub);

	std::string const	getTree() const;
};

#endif
