/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 13:57:34 by pohl              #+#    #+#             */
/*   Updated: 2021/10/24 18:58:27 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "structs.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main( void )
{
	Data		*ptr = new Data;
	Data		*new_ptr;
	uintptr_t	raw;

	ptr->data = "Hi, how's going";
	raw = serialize(ptr);
	new_ptr = deserialize(raw);
	std::cout << "new_ptr->data = " << new_ptr->data << std::endl;
}
