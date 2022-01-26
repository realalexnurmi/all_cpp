/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:28 by pohl              #+#    #+#             */
/*   Updated: 2021/10/24 20:07:33 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B: public Base
{

public:

	B( void );
	B( const B &src );
	~B( void );

	B	&operator=( const B &rhs );

private:

};

std::ostream	&operator<<( std::ostream &ostr, const B &instance );

#endif
