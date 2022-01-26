/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:04:18 by pohl              #+#    #+#             */
/*   Updated: 2021/10/04 12:35:01 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed::setVerbose(true);
	Fixed a;
	std::cout << a.getRawBits() << std::endl;

	a.setRawBits(21);
	std::cout << a.getRawBits() << std::endl;

	Fixed b( a );
	std::cout << b.getRawBits() << std::endl;

	b.setRawBits(42);
	Fixed c;
	c = b;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
