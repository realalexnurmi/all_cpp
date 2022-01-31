/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:30:25 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 00:37:50 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void		swap(T& a, T& b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
const T&	min(const T& a, const T& b)
{
	return (a < b ? a : b);
}

template<typename T>
const T&	max(const T& a, const T& b)
{
	return (a > b ? a : b);
}

#endif
