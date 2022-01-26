/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:52:15 by pohl              #+#    #+#             */
/*   Updated: 2021/10/27 10:21:55 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap( T &a, T &b )
{
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
const T	&min( const T &a, const T &b )
{
	return (a < b ? a : b);
}

template<typename T>
const T	&max( const T &a, const T &b )
{
	return (a > b ? a : b);
}

#endif
