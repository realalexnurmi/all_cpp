/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:32:28 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/21 13:05:20 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

void	complain(std::string level)
{
	Karen karen(level);

	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	if (karen.getLevel() == Karen::levelInsignificant)
		std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
}

int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr << "./karenFilter complaintLevel" << std::endl;
		return (1);
	}
	complain(argv[1]);
}
