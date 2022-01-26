/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:46:15 by pohl              #+#    #+#             */
/*   Updated: 2021/10/12 14:49:08 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{

public:

	Ice( void );
	Ice( const Ice &src );
	~Ice( void );

	Ice		&operator=( const Ice &other );

	virtual AMateria	*clone( void ) const ;
	virtual void		use(ICharacter& target);

private:

};

#endif
