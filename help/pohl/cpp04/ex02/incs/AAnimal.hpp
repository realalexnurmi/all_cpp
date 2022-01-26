/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:18:12 by pohl              #+#    #+#             */
/*   Updated: 2021/10/06 15:24:09 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{

public:

	virtual ~AAnimal( void );

	virtual AAnimal		&operator=( const AAnimal &other ) = 0;

	virtual void		makeSound( void ) const = 0;
	
	const std::string	&getType( void ) const ;

	virtual Brain		*getBrain( void ) const = 0;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const AAnimal &instance );

#endif
