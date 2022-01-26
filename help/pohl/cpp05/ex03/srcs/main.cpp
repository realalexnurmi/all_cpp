/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:45:01 by pohl              #+#    #+#             */
/*   Updated: 2021/10/14 10:04:49 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		usefulIdiot;
	Bureaucrat	paul("Paul", 3);
	Form		*form;

	form = usefulIdiot.makeForm("this one doesn't exist", "Justin");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("presidential pardon", "Maynard");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("shrubbery creation", "Danny");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("robotomy request", "Adam");
	form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;
}
