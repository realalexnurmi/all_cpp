/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:46:15 by pohl              #+#    #+#             */
/*   Updated: 2021/10/12 14:49:07 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{

public:

	Cure( void );
	Cure( const Cure &src );
	~Cure( void );

	Cure	&operator=( const Cure &other );

	virtual AMateria	*clone( void ) const ;
	virtual void		use(ICharacter& target);

private:

};

#endif
