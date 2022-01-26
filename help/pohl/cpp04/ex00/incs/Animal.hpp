/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:18:12 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 16:53:30 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

public:

	Animal( void );
	Animal( const Animal &src );
	virtual ~Animal( void );

	Animal	&operator=( const Animal &other );

	virtual void	makeSound( void ) const ;
	
	const std::string	&getType( void ) const ;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );

#endif
