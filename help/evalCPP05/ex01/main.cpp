#include "Form.hpp"

int main(){
	try
	{
		Bureaucrat bureaucrat("Mekan", 150);
		Form Important("Important", 15, 10);
		std::cout << Important << std::endl;
		bureaucrat.SignForm(Important);
		bureaucrat.incGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.SignForm(Important);
		bureaucrat.decGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
