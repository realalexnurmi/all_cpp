/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 06:34:30 by paulohl           #+#    #+#             */
/*   Updated: 2021/05/04 18:23:58 by ft               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (--argc)
	{
		argv++;
		for (size_t i = 0; i < strlen(*argv); i++)
			(*argv)[i] = std::toupper((*argv)[i]);
		std::cout << *argv << " ";
	}
	std::cout << std::endl;
	return (0);
}
