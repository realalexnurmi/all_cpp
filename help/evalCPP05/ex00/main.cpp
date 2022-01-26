#include "Bureaucrat.hpp"

int main(){
	try {
		Bureaucrat first("Mekan", 1);
		std::cout << "Bureaucrat " << first.getName() << " is ready to work!" << std::endl;
		first.incGrade();
		std::cout << "After increment Grade:\n" << first.getGrade() << std::endl;
	}
	catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat second("Mekan", 1);
		std::cout << second << std::endl;
		std::cout << "Bureaucrat " << second.getName() << " is ready to work!" << std::endl;
		second.decGrade();
		std::cout << "After decrement Grade:\n" << second.getGrade() << std::endl;
	}
	catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat three("Mekan", 150);
		std::cout << "Bureaucrat " << three.getName() << " is ready to work!" << std::endl;
		three.decGrade();
		std::cout << "After decrement Grade:\n" << three.getGrade() << std::endl;
	}
	catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat four("Mekan", 150);
		std::cout << "Bureaucrat " << four.getName() << " is ready to work!" << std::endl;
		four.incGrade();
		std::cout << "After increment Grade:\n" << four.getGrade() << std::endl;
	}
	catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
}
