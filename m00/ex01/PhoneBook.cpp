/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:04:17 by enena             #+#    #+#             */
/*   Updated: 2022/01/14 20:49:21 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->addingPlace = 0;
	this->count = 0;
}

PhoneBook::~PhoneBook(void)
{
}

bool		PhoneBook::exit(void)
{
	if (std::cin.eof())
		std::cout << "EOF means no further commands!" << std::endl;
	std::cout << "Your contacts are'nt saved. See ya later. Bye!" << std::endl;
	return true;
}

void		PhoneBook::add(void)
{
	if (this->addingPlace == CONTACT_MAX_COUNT)
		this->addingPlace = 0;
	if (this->count != CONTACT_MAX_COUNT)
		this->count++;
	this->contacts[this->addingPlace].setContact();
	if (!(std::cin.eof()))
	{
		std::cout << "Contact added!" << std::endl;
		this->addingPlace++;
	}
}

std::string	PhoneBook::trim_str(std::string str)
{
	std::string	ret;

	if (str.length() > WIDTH_COLUMN)
		ret = str.substr(0, WIDTH_COLUMN - 1) .append(".");
	else
		ret = str;
	return (ret);
}

void		PhoneBook::print_head(void)
{
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WIDTH_COLUMN)
		<< trim_str("Index");
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WIDTH_COLUMN)
		<< trim_str("First name");
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WIDTH_COLUMN)
		<< trim_str("Last name");
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WIDTH_COLUMN)
		<< trim_str("Nickname");
	std::cout << "|" << std::endl;
}

void		PhoneBook::print_info(size_t i)
{
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WIDTH_COLUMN)
		<< i + 1;
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WIDTH_COLUMN)
		<< trim_str(this->contacts[i].getFirstName());
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WIDTH_COLUMN)
		<< trim_str(this->contacts[i].getLastName());
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WIDTH_COLUMN)
		<< trim_str(this->contacts[i].getNickame());
	std::cout << "|" << std::endl;
}

void		PhoneBook::search(void)
{
	size_t		i;
	size_t		index;

	i = 0;
	if (this->count == 0)
		std::cout << "Book is empty! Add contacts before search." << std::endl;
	else
	{
		this->print_head();
		while (i < this->count)
		{
			this->print_info(i);
			i++;
		}
		std::cout << "Type index choosen contact for displaying info. "
			<< "(Number, only digit)" << std::endl;
		std::cout << ">";
		while ((!(std::cin >> index) || index < 1 || index > this->count)
			&& !(std::cin.eof()))
		{
			std::cout << "Wrong input! Please enter correct existing index."
				<< std::endl;
			std::cout << ">";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		}
		if (!(std::cin.eof()))
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			this->contacts[index - 1].printContact();
		}
	}
}

void		PhoneBook::start(void)
{
	std::cout << "Welcome to awesome phonebook \"CRAPPY\"!" << std::endl;
	this->goOn();
}

void		PhoneBook::goOn(void)
{
	std::cout << "Possible command: ADD, SEARCH, EXIT (only capital letter)"
		<< std::endl;
	std::cout << "What you wanna do?" << std::endl;
	std::cout << ">";
}

void		PhoneBook::takeCommand(void)
{
	std::getline(std::cin, this->command);
}

bool		PhoneBook::react(void)
{
	bool	exited;

	exited = false;
	if (this->command == "ADD")
		this->add();
	else if (this->command == "SEARCH")
		this->search();
	else if (this->command == "EXIT" || std::cin.eof())
		exited = this->exit();
	else
		std::cout << "UNKNOWN COMMAND! FIX AND REPEAT YOUR ENTRY!" << std::endl;
	this->command.erase(0, this->command.npos);
	if (!exited && !(std::cin.eof()))
		this->goOn();
	return exited;
}
