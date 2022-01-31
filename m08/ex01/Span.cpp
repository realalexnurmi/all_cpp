/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:23:37 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 18:51:54 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <cstdlib>
#include <iterator>
#include "Span.hpp"

Span::Span(void) : _storedSize(0)
{
}

Span::Span(size_t storedSize) : _storedSize(storedSize),
	_storage(0)
{
}

Span::Span(const Span& init)
{
	*this = init;
}

Span::~Span(void)
{
}

Span&	Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	this->_storedSize = other._storedSize;
	this->_storage = other._storage;
	return *this;
}

void	Span::addNumber(int number)
{
	if (_storage.size() == _storedSize)
		throw std::out_of_range("Cannot add any more numbers");
	_storage.push_back(number);
}

int		Span::shortestSpan(void) const
{
	std::vector<int>			tmp = _storage;
	int							result;
	std::vector<int>::iterator	it;

	if (_storage.size() <= 1)
		throw std::logic_error("Not enough numbers stored to provide a span");
	sort(tmp.begin(), tmp.end());
	result = *(tmp.begin() + 1) - *tmp.begin();
	if (this->getSize() != 2)
	{
		for (it = tmp.begin() + 1; it != tmp.end() - 1 && result != 0; it++)
		{
			if (*(it + 1) - *it < result)
				result = *(it + 1) - *it;
		}
	}
	return result;
}

int	Span::longestSpan(void) const
{
	std::vector<int>			tmp = this->_storage;
	std::vector<int>::iterator	max_it;
	std::vector<int>::iterator	min_it;

	if (_storage.size() <= 1)
		throw std::logic_error("Not enough numbers stored to provide a span");
	min_it = std::min_element(tmp.begin(), tmp.end());
	max_it = std::max_element(tmp.begin(), tmp.end());
	return (*max_it - *min_it);
}

size_t	Span::getSize( void ) const
{
	return _storage.size();
}

size_t	Span::getMaxSize(void) const
{
	return _storedSize;
}

size_t	Span::getSpaceLeft(void) const
{
	return (this->getMaxSize() - this->getSize());
}

std::ostream&	operator<<(std::ostream& out, Span const& src)
{
	int	shortest = src.shortestSpan();
	int	longest = src.longestSpan();

	out << "Span, max size = " << src.getMaxSize() << ", contains "
		<< src.getSize() << " numbers. Shortest span = "
		<< shortest << ". Longest span = " << longest;
	return out;
}
