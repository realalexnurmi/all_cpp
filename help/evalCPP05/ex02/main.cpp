#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	try {
		Form *newForm = new ShrubberyCreationForm("FORM 1");
		Bureaucrat Hermes("Hermes Conrad", 5);
		Hermes.SignForm(*newForm);
		Hermes.execute(*newForm);
		delete newForm;
		newForm = new RobotomyRequestForm("HELLO");
		Hermes.SignForm(*newForm);
		Hermes.execute(*newForm);
		delete newForm;
		newForm = new PresidentialPardonForm("MEKAN ");
		Hermes.SignForm(*newForm);
		Hermes.execute(*newForm);
		delete newForm;
	} catch (std::exception & e) {
		std::cout<<e.what()<<std::endl;
	}
}
