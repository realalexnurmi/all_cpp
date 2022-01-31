/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:26:27 by enena             #+#    #+#             */
/*   Updated: 2022/01/29 15:40:08 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void)
{
	this->secret = "I'm B!";
}

B::~B(void)
{
}

const std::string&	B::whoIm(void) const
{
	return this->secret;
}

std::ostream&		operator<<(std::ostream& out, const B& src)
{
	out << src.whoIm() << std::endl;
	return out;
}
