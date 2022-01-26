#include "Form.hpp"


Form::Form(std::string target, std::string name, bool sign, int gradeRequire, int gradeExecute) :
	_target(target),
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

std::string const Form::getName(void) const {
	return (this->_name);
}

bool	Form::getSign() const {
	return (this->_sign);
}

int const 	Form::getRequiredGrade(void) const {
	return (this->_gradeRequire);
}

int const 	Form::getExecutionGrade(void) const {
	return (this->_gradeExecute);
}

std::string	Form::getTarget() const {
	return (_target);
}

Form	&Form::operator=( Form const & form_op ){
	if (this != & form_op ){
		_sign = form_op.getSign();
		_target = form_op.getTarget();
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

int					Form::beSigned( Bureaucrat const & signer ) {
	if (_sign == 1)
		return (notSign);
	if ( signer.getGrade() <= _gradeRequire && _sign == 0){
		_sign = 1;
		return (sign);
	}
	return (outOfRange);
}

int					Form::execute(Bureaucrat const & executor) const {
	if (_sign == 1 && executor.getGrade() <= _gradeExecute) {
		if (!executeAction())
			return (-2);
		return (1);
	} else if (executor.getGrade() <= _gradeExecute && _sign == 0)
		return (0);
	else
		return (-1);
}
