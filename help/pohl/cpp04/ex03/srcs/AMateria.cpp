/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:28:30 by pohl              #+#    #+#             */
/*   Updated: 2021/10/12 14:17:57 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( const std::string &type ): _type(type)
{
	std::cout << "String constructor for AMateria called" << std::endl;
	return;
}

const std::string	&AMateria::getType( void ) const
{
	return this->_type;
}
