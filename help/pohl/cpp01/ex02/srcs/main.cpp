/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:47:51 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:45:31 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main( void )
{
	std::string	originalString = "HI THIS IS BRAIN";
	std::string *stringPTR = &originalString;
	std::string	&stringREF = originalString;

	std::cout << "Original string address: " << &originalString << std::endl;
	std::cout << "using stringPTR: " << &(*stringPTR) << std::endl;
	std::cout << "using stringREF: " << &stringREF << std::endl;

	std::cout << "Original string: " << originalString << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
