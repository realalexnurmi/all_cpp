
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) {
	std::cout << "Bureaucrat Constructor"<< std::endl;
	this->_name = name;
	this->_grade = grade;
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade < 0)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bure_copy) {
	std::cout << "Bureaucrat copy Constructor" << std::endl;
	this->_name = bure_copy._name;
	this->_grade = bure_copy._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bure_op) {
	if (this != &bure_op) {
		this->_name = bure_op._name;
		this->_grade = bure_op._grade;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bure){
	out << bure.getName() << ", bureaucrat grade "<< bure.getGrade();
	return (out);
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

void Bureaucrat::incGrade(void) {
	if (_grade-1 < 1) {
		throw GradeTooHighException();
	}
	_grade -= 1;
}

void Bureaucrat::decGrade(void) {
	if (_grade + 1 > 150) {
		throw GradeTooLowException();
	}
	_grade += 1;
}

char const *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Out of diapazon! Too Low Grade");
}

char const *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Out of diapazon! Too High Grade");
}
