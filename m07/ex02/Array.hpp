/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:51:09 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 18:58:08 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{
private:
	size_t	_size;
	T*		_array;

public:
	Array(void);
	Array(const unsigned int size);
	Array(const Array<T>& init);
	~Array(void);


	Array<T>&	operator=(const Array<T>& other);
	T&			operator[](const size_t ind) const;

	size_t		size(void) const;
};

#endif
