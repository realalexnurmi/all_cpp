/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:40:34 by enena             #+#    #+#             */
/*   Updated: 2022/01/29 15:41:31 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void)
{
	this->secret = "I'm C!";
}

C::~C(void)
{
}

const std::string&	C::whoIm(void) const
{
	return this->secret;
}

std::ostream&		operator<<(std::ostream& out, const C& src)
{
	out << src.whoIm() << std::endl;
	return out;
}
