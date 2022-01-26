/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:28:56 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 16:50:30 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{

public:

	Dog( void );
	Dog( const Dog &src );
	~Dog( void );

	virtual void	makeSound( void ) const ;

private:

};

#endif
