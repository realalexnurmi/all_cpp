/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:58:28 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 22:40:42 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : _currIdea(0)
{
	std::cout << "Someone getting new brain!" << std::endl;
}

Brain::Brain(const Brain& init)
{
	std::cout << "Someone has copy other Brain now!" << std::endl;
	operator=(init);
}

Brain::~Brain(void)
{
	std::cout << "Someone is losing their brain!" << std::endl;
}

Brain&			Brain::operator=(const Brain& other)
{
	if (this == &other)
		return *this;
	for (size_t i = 0; i < Brain::_countIdeas; i++)
		this->ideas[i] = other.ideas[i];
	this->setNumCurrIdea(other.getNumCurrIdea());
	return *this;
}

unsigned int	Brain::getNumCurrIdea(void) const
{
	return _currIdea;
}

void			Brain::setNumCurrIdea(const unsigned int currIdea)
{
	_currIdea = currIdea;
}

void			Brain::addIdea(const std::string& idea)
{
	if (_currIdea < _countIdeas)
		++_currIdea;
	else
		_currIdea = 0;
	ideas[_currIdea] = idea;
}

void			Brain::thinkALot(const std::string& baseIdea)
{
	for (size_t i = 0; i < Brain::_countIdeas; i++)
		ideas[i] = std::to_string(i) + ") " + baseIdea;
	_currIdea = 0;
}

void			Brain::thinkNext(void)
{
	std::cout << ideas[_currIdea++] << std::endl;
	if (_currIdea == _countIdeas)
		_currIdea = 0;
}
