/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:37:03 by pohl              #+#    #+#             */
/*   Updated: 2021/11/08 12:09:57 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "iter.hpp"

template<typename T>
void	display( T &whatever )
{
	std::cout << "Variable's value is: " << whatever << std::endl;
}

void	setRandomValue( int &number )
{
	number = std::rand() % 100;
}

int	main( void )
{
	std::string	strTable[3];
	int			*intTable = new int[5];

	strTable[0] = "Hi how are you?";
	strTable[1] = "Fine, and you dear sir?";
	strTable[2] = "Very fine indeed!";
	::iter(strTable, 3, &display);
	for (int i = 0; i < 5; i ++)
		setRandomValue(intTable[i]);
	::iter(intTable, 5, &display);
}
