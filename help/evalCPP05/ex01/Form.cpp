#include "Form.hpp"

Form::Form(std::string name, bool sign, int gradeRequire, int gradeExecute) :
	_name(name),
	_sign(sign),
	_gradeRequire(gradeRequire),
	_gradeExecute(gradeExecute)
{
	if (_gradeRequire <= 0 || _gradeExecute <= 0) {
		throw GradeTooLowException();
	}
	if (_gradeRequire >= 150 || _gradeExecute >= 150) {
		throw GradeTooHighException();
	}
}

Form::Form (Form const &form_copy) :
	_gradeRequire(form_copy.getRequiredGrade()),
	_gradeExecute(form_copy.getExecutionGrade())
{
	_name = form_copy.getName();
	_sign = form_copy.getSign();
}

Form	&Form::operator=( Form const & form_op ){
	if (this != & form_op ){
		_sign = form_op.getSign();
	}
	return (*this);
}

char const		*Form::GradeTooHighException::what() const throw(){
	return ("Out of diapazon! Too High Grade");
}

char const		*Form::GradeTooLowException::what() const throw(){
	return ("Out of diapazon! Too Low Grade");
}

std::ostream	&operator<<(std::ostream &out, Form const &form){
	if (form.getSign() == 0)
		out << "not signed" << std::endl;
	else
		out << "signed" << std::endl;
	return (out);
}

int	Form::beSigned( Bureaucrat const & bure) {
	if (_sign == 1)
		return (sign);
	else if (bure.getGrade() <= _gradeRequire && _sign == 0) {
		_sign = 1;
		return (notSign);
	}
	return (outOfRange);
}

int const 	Form::getRequiredGrade(void) const {
	return (this->_gradeRequire);
}

int const 	Form::getExecutionGrade(void) const {
	return (this->_gradeExecute);
}

std::string const Form::getName(void) const {
	return (this->_name);
}

bool	Form::getSign() const {
	return (this->_sign);
}

Form::~Form(){
	std::cout << "Bureaucrat Destructor" << std::endl;
}
