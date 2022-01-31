/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:08:07 by pohl              #+#    #+#             */
/*   Updated: 2022/01/29 16:41:47 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeAnalyzer.hpp"

#include <string>
#include <iostream>

int	main(int argc, char** argv)
{
	TypeAnalyzer typeAnalyzer;

	try
	{
		if (argc == 1)
			throw (TypeAnalyzer::EmptyInput());
		for (int i = 1; i < argc; i++)
		{
			//std::cout << "===== ARG: \"" << argv[i] << "\" =====" << std::endl;
			typeAnalyzer.analyzeNewInput(argv[i]);
			typeAnalyzer.printRezult();
			if (i + 1 < argc)
				std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		typeAnalyzer.help();
	}
	return 0;
}
