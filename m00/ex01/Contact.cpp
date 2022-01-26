/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:11:01 by enena             #+#    #+#             */
/*   Updated: 2022/01/14 20:27:50 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::fieldNames[COUNT_FIELDS] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

Contact::Contact(void)
{
	this->info[FirstName] = std::string();
	this->info[LastName] = std::string();
	this->info[Nickname] = std::string();
	this->info[PhoneeNumber] = std::string();
	this->info[DarkestSecret] = std::string();
}

Contact::~Contact(void)
{
}

void		Contact::setContact(void)
{
	size_t	info_len;

	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		info_len = 0;
		while (info_len == 0 && !(std::cin.eof()))
		{
			std::cout << "Enter info about " << this->fieldNames[i] << ":"
				<< std::endl;
			std::cout << ">";
			std::getline(std::cin, this->info[i]);
			info_len = this->info[i].length();
			if (info_len == 0 && !(std::cin.eof()))
				std::cout << "Empty field not allowed! Please enter info!"
					<< std::endl;
		}
	}
}

std::string	Contact::getFirstName(void)
{
	return (this->info[FirstName]);
}

std::string	Contact::getLastName(void)
{
	return (this->info[LastName]);
}

std::string	Contact::getNickame(void)
{
	return (this->info[Nickname]);
}

void		Contact::printContact(void)
{
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << Contact::fieldNames[i] << ": ";
		std::cout << this->info[i] << std::endl;
	}
}
