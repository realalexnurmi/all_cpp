/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:28:56 by pohl              #+#    #+#             */
/*   Updated: 2021/10/06 12:44:11 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{

public:

	Cat( void );
	Cat( const Cat &src );
	~Cat( void );

	Cat				&operator=( Cat const & rhs );
	virtual AAnimal	&operator=( const AAnimal &other );

	virtual void	makeSound( void ) const ;

	virtual Brain	*getBrain( void ) const;

private:

	Brain	*brain;

};

#endif
