/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:28 by pohl              #+#    #+#             */
/*   Updated: 2021/10/24 20:07:41 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

class C: public Base
{

public:

	C( void );
	C( const C &src );
	~C( void );

	C	&operator=( const C &rhs );

private:

};

std::ostream	&operator<<( std::ostream &ostr, const C &instance );

#endif
