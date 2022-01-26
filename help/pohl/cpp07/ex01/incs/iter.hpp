/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:17:59 by pohl              #+#    #+#             */
/*   Updated: 2021/11/08 12:06:23 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	iter(T *array, int arraySize, void (*fctToExecute)(const T &))
{
	for (int i = 0; i < arraySize; i++)
		fctToExecute(array[i]);
}

/* template<typename T> */
/* void	iter(T *array, int arraySize, void (*fctToExecute)(T &)) */
/* { */
/* 	for (int i = 0; i < arraySize; i++) */
/* 		fctToExecute(array[i]); */
/* } */
