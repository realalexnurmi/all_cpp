/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:54:24 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 06:04:24 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		Umpalumpa;
	Bureaucrat	Alex("Alex", 5);
	Form		*form;

	form = Umpalumpa.makeForm("wtf", "enena");
	if (form)
	{
		form->beSigned(Alex);
		form->execute(Alex);
		delete form;
	}
	form = Umpalumpa.makeForm("presidential pardon", "enena");
	{
		form->beSigned(Alex);
		form->execute(Alex);
		delete form;
	}
	form = Umpalumpa.makeForm("shrubbery creation", "enena");
	{
		form->beSigned(Alex);
		form->execute(Alex);
		delete form;
	}
	form = Umpalumpa.makeForm("robotomy request", "enena");
	{
		form->beSigned(Alex);
		form->execute(Alex);
		delete form;
	}
}