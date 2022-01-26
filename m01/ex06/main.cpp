/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:57:21 by enena             #+#    #+#             */
/*   Updated: 2022/01/19 23:09:06 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Wrong args!" << std::endl;
	else
	{
		Karen karen = Karen(std::string(argv[1]));

		switch (karen.getFilter())
		{
		case debug:
			karen.complain("DEBUG");
		case info:
			karen.complain("INFO");
		case warning:
			karen.complain("WARNING");
		case error:
			karen.complain("ERROR");
			break;
		case unexpected:
			karen.complain("");
		default:
			break;
		}
	}
	return 0;
}