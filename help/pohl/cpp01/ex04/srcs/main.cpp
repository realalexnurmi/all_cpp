/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:54:36 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 19:24:33 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

void	printUsage(void)
{
	std::cout << "./cppSed fileName stringToReplace replacement" << std::endl;
}

int	printError(std::string errorMsg)
{
	if (errorMsg != "")
		std::cerr << "Error: " << errorMsg << std::endl;
	printUsage();
	return (1);
}

int	main(int argc, char **argv)
{
	CppSed sed;

	if (argc != 4)
		return (printError("Wrong number of arguments"));
	if (!sed.setFile(argv[1]))
		return (printError(""));
	if (!sed.replace(argv[2], argv[3]))
		return (printError(""));
}
