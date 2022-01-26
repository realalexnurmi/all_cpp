/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:50:59 by enena             #+#    #+#             */
/*   Updated: 2022/01/16 02:33:31 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;
	
	std::cout.setf(std::ios::left);
	std::cout << "address:" << std::endl;
	std::cout << std::setw(15) << "by str:" << &str << std::endl;
	std::cout << std::setw(15) << "by stringPTR:" << stringPTR << std::endl;
	std::cout << std::setw(15) << "by stringREF:" << &stringREF << std::endl;
	std::cout << "value:" << std::endl;
	std::cout << std::setw(15) << "by str:" << str << std::endl;
	std::cout << std::setw(15) << "by stringPTR:" << *stringPTR << std::endl;
	std::cout << std::setw(15) << "by stringREF: " << stringREF << std::endl;
	return 0;
}
