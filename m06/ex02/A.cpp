/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:26:10 by enena             #+#    #+#             */
/*   Updated: 2022/01/29 15:38:22 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
	this->secret = "I'm A!";
}

A::~A(void)
{
}

const std::string&	A::whoIm(void) const
{
	return this->secret;
}

std::ostream&		operator<<(std::ostream& out, const A& src)
{
	out << src.whoIm() << std::endl;
	return out;
}
