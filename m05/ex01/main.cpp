/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:00:36 by enena             #+#    #+#             */
/*   Updated: 2022/01/26 06:48:38 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		try
		{
			Bureaucrat	Alex("Alex", 50);
			Form		Check("Check", 49, 100);

			Alex.signForm(Check);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception occurred: " << e.what() << std::endl;
		}
	}
	return 0;
}