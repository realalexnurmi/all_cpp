/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:06:16 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 10:13:33 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"

template<typename T>
Array<T>::Array(void) :
	_size(0), 
	_array(NULL)
{
}

template<typename T>
Array<T>::Array(const unsigned int size) :
	_size(size)
{
	if (size < 0)
		throw std::overflow_error("Index out of bounds");
	this->_array = new T[size];
}

template<typename T>
Array<T>::Array(const Array<T>& init) : 
	_size(init.size()),
	_array(new T[init.size()])
{
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = init[i];
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_size > 0)
		delete [] this->_array;
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other)
{
	if (this == &other)
		return *this;
	if (this->_size > 0)
		delete [] this->_array;
	if (other.size() != 0)
	{
		this->_size = other.size();
		this->_array = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
			this->_array[i] = other[i];
	}
	return *this;
}

template<typename T>
T&			Array<T>::operator[](const size_t ind) const
{
	if (ind >= this->_size || ind < 0)
		throw std::overflow_error("Index out of bounds");
	return this->_array[ind];
}

template<typename T>
size_t		Array<T>::size(void) const
{
	return this->_size;
}

#endif
