/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:05:31 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 19:23:54 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <limits>

#define MULTIPLIER 42

void			randomFill(Span& toFill)
{
	size_t	numbersToFill = toFill.getSpaceLeft();
	int		diapason;
	int		base;

	if (std::numeric_limits<int>::max() / toFill.getMaxSize() <= MULTIPLIER)
		diapason = std::numeric_limits<int>::max();
	else
		diapason = toFill.getMaxSize() * MULTIPLIER;
	srand(time(NULL));
	for (size_t i = 0; i < numbersToFill; i++)
	{
		base = rand();
		toFill.addNumber(2 * ((base % diapason) - ((base % diapason) / 2)));
	}
}

int	main(void)
{
	std::cout << "My main." << std::endl;
	{
		Span	span1(5);

		std::cout << span1.getSize() << std::endl;
		std::cout << span1.getMaxSize() << std::endl;
		try
		{
			std::cout << span1.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << span1.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		span1.addNumber(16);
		try
		{
			std::cout << span1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		span1.addNumber(3);
		std::cout << span1 << std::endl;
		span1.addNumber(-10);
		std::cout << span1 << std::endl;
		span1.addNumber(0);
		std::cout << span1 << std::endl;
		span1.addNumber(1000);
		std::cout << span1 << std::endl;
		try
		{
			span1.addNumber(4);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		{
			Span	span2(42);

			span2.addNumber(27);
			span2.addNumber(42);
			std::cout << span2 << std::endl;
			::randomFill(span2);
			std::cout << span2 << std::endl;
		}
		{
			Span	span2(500);

			span2.addNumber(27);
			span2.addNumber(42);
			std::cout << span2 << std::endl;
			::randomFill(span2);
			std::cout << span2 << std::endl;
		}
		{
			Span	span2(10000);

			span2.addNumber(27);
			span2.addNumber(42);
			std::cout << span2 << std::endl;
			::randomFill(span2);
			std::cout << span2 << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "Subject main." << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;		
	}
	return 0;
}
