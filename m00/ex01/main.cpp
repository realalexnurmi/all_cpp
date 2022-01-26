/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:41:03 by enena             #+#    #+#             */
/*   Updated: 2022/01/14 20:29:35 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	bool		exited;

	phonebook.start();
	exited = false;
	while (!exited)
	{
		phonebook.takeCommand();
		exited = phonebook.react();
	}
	return 0;
}