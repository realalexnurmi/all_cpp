/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:18:12 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 16:49:50 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &src );
	~WrongAnimal( void );

	WrongAnimal	&operator=( const WrongAnimal &other );

	void	makeSound( void ) const ;
	
	const std::string	&getType( void ) const ;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance );

#endif
