#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(){
	try {
		Intern noob;
		Form *newForm = noob.makeForm("shrubbery request", "banana");
		Bureaucrat Hermes("Hermes Conrad", 5);
		Hermes.SignForm(*newForm);
		Hermes.execute(*newForm);
		
		delete newForm;
		newForm = noob.makeForm("robotomy request", "bender");
	
		Hermes.SignForm(*newForm);
		Hermes.execute(*newForm);
	
		delete newForm;
		newForm = noob.makeForm("kek request", "haha");

		Hermes.SignForm(*newForm);
		Hermes.execute(*newForm);
		delete newForm;
	} catch (std::exception & e) {
		std::cout<<e.what()<<std::endl;
	}
}
