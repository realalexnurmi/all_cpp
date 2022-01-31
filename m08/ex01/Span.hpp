/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:25:46 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 18:50:13 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
private:
	size_t				_storedSize;
	std::vector<int>	_storage;
public:
	Span(void);
	Span(size_t storedSize);
	Span(const Span& init);
	~Span(void);

	Span&				operator=(const Span& other);

	void				addNumber(int number);
	int					shortestSpan(void) const;
	int					longestSpan(void) const;
	size_t				getSize(void) const;
	size_t				getMaxSize(void) const;
	size_t				getSpaceLeft(void) const;
};

std::ostream	&operator<<( std::ostream &ostr, const Span &instance );

#endif
