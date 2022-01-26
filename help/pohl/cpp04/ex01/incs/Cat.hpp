/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:28:56 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 17:58:25 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

public:

	Cat( void );
	Cat( const Cat &src );
	~Cat( void );

	Cat				&operator=( Cat const & rhs );
	virtual Animal	&operator=( const Animal &other );

	virtual void	makeSound( void ) const ;

	virtual Brain	*getBrain( void ) const;

private:

	Brain	*brain;

};

#endif
