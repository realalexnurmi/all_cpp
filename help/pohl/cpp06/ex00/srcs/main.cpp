/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:08:07 by pohl              #+#    #+#             */
/*   Updated: 2021/10/25 15:09:50 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeAnalyst.hpp"
#include "utils.hpp"

int	main( int argc, char **argv )
{
	TypeAnalyst typeAnalyst;

	try
	{
		if (argc == 1)
			throw (TypeAnalyst::EmptyInput());
		for (int i = 1; i < argc; i++)
		{
			typeAnalyst.analyseNewInput(argv[i]);
			typeAnalyst.printTypes();
			if (i + 1 < argc)
				std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		print_help();
	}
}
