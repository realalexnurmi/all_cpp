/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:28:30 by pohl              #+#    #+#             */
/*   Updated: 2021/10/12 15:15:13 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

protected:

	std::string	_type;

public:

	AMateria( const std::string &type );
	virtual	~AMateria(){}

	const std::string	&getType( void ) const ;
	virtual AMateria	*clone( void ) const = 0;
	virtual void		use( ICharacter& target ) = 0;

};

#endif
