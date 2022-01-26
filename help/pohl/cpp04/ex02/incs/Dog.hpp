/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:28:56 by pohl              #+#    #+#             */
/*   Updated: 2021/10/06 12:44:06 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{

public:

	Dog( void );
	Dog( const Dog &src );
	~Dog( void );

	virtual Dog		&operator=( Dog const & rhs );
	virtual AAnimal	&operator=( const AAnimal &other );

	virtual void	makeSound( void ) const ;

	virtual Brain	*getBrain( void ) const;

private:

	Brain	*brain;

};

#endif
