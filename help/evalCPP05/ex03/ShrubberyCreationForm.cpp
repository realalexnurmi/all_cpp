#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::_tree = ""
	"              v .   ._, |_  .,\n"
	"           `-._\\/  .  \\ /    |/_\n"
	"               \\  _\\, y | \\//\n"
	"         _\\_.___\\, \\/ -.\\||\n"
	"           `7-,--.`._||  / / ,\n"
	"           /'     `-. `./ / |/_.'\n"
	"                     |    |//\n"
	"                     |_    /\n"
	"                     |-   |\n"
	"                     |   =|\n"
	"                     |    |\n"
	"--------------------/ ,  . \\--------._\n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target ,"ShrubberyCreationForm", false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & shrub) : Form( shrub.getTarget() ,"ShrubberyCreationForm", 145, 137) {}

std::string const		ShrubberyCreationForm::getTree() const {
	return (_tree);
}

int						ShrubberyCreationForm::executeAction() const {
	std::ofstream		out;
	std::string			file = (this->getTarget() + "_shrubbery");

	out.exceptions ( std::ifstream::badbit );
	try {
		out.open(file);
		if (!out.is_open()){
			std::cout<<"Can't open file"<<std::endl;
			return (0);
		} else {
			out << _tree;
			out.close();
		}
	}
	catch ( const std::ifstream::failure &exp) {
		std::cout<<"can't writing or open file"<<std::endl;
		std::cout<<exp.what()<<std::endl;
	}
	return (1);	
}
