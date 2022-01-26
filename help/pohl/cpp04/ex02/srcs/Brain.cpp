/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:58:32 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 17:06:33 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default constructor for Brain called" << std::endl;
	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain( void )
{
	std::cout << "Destructor for Brain called" << std::endl;
	return;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "Assignement operator for Brain called" << std::endl;
	for (int i = 0; i < Brain::numberOfIdeas; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
