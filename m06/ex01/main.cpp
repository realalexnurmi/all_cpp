/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:58:27 by enena             #+#    #+#             */
/*   Updated: 2022/01/29 18:42:07 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data*		ptr = new Data;
	Data*		next = new Data;
	Data*		new_ptr = NULL;
	Data*		tmp;
	uintptr_t	raw;

	ptr->data = "Think i may save it more compact!";
	ptr->count = 2;
	ptr->next = next;
	next->data = "I'ts madness!";
	next->count = 10;
	next->next = NULL;
	tmp = ptr;
	std::cout << "tmp FROM original ptr before serialize" << std::endl;
	while (tmp)
	{
		std::cout << "tmp->data = " << tmp->data
			<< " and tmp->value count = " << tmp->count << std::endl;
		tmp = tmp->next;
	}

	raw = serialize(ptr);

	std::cout << "SIZE ptr = " << sizeof(ptr)
		<< " and value = " << ptr << std::endl;
	std::cout << "SIZE data struct on ptr = " << sizeof(*ptr) << std::endl;
	std::cout << "SIZE raw value serialize = " << sizeof(raw)
		<< " and value = " << raw << std::endl;

	new_ptr = deserialize(raw);
	std::cout << std::endl;
	std::cout << "tmp FROM deserialize new_ptr" << std::endl;
	tmp = new_ptr;
	while (tmp)
	{
		std::cout << "tmp->data = " << tmp->data
			<< " and tmp->value count = " << tmp->count << std::endl;
		tmp = tmp->next;
	}
	ptr->count++;
	raw = serialize(ptr);

	std::cout << "SIZE ptr = " << sizeof(ptr)
		<< " and value = " << ptr << std::endl;
	std::cout << "SIZE data struct on ptr = " << sizeof(*ptr) << std::endl;
	std::cout << "SIZE raw value serialize = " << sizeof(raw)
		<< " and value = " << raw << std::endl;


	new_ptr = deserialize(raw);
	std::cout << std::endl;
	std::cout << "tmp FROM deserialize new_ptr" << std::endl;
	tmp = new_ptr;
	while (tmp)
	{
		std::cout << "tmp->data = " << tmp->data
			<< " and tmp->value count = " << tmp->count << std::endl;
		tmp = tmp->next;
	}
	return 0;
}
