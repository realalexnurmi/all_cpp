/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:28 by pohl              #+#    #+#             */
/*   Updated: 2022/01/29 15:33:01 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A: public Base
{

public:

	A( void );
	A( const A &src );
	~A( void );

	A	&operator=( const A &rhs );

private:

};

std::ostream	&operator<<( std::ostream &ostr, const A &instance );

#endif
