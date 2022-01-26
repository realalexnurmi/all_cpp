/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:48:17 by paulohl           #+#    #+#             */
/*   Updated: 2021/05/05 20:56:44 by ft               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include <string>
#include <iostream>
#include "Friend.class.hpp"

void	search_cmd(Friend phonebook[8], int friend_count)
{
	int		id;

	std::cout << "Let's see how popular you're getting" << std::endl;
	for (int i = 0; i < friend_count; i++)
		(phonebook[i]).print_summary(i + 1);
	std::cout << "Which contact do you want to see? ";
	while (!(std::cin >> id) || id < 1 || id > friend_count)
	{
		std::cout << "Wrong input, please select an existing id: ";
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	phonebook[id - 1].print_info();
	std::cin.clear();
	std::cin.ignore(10000,'\n');
}

std::string	random_string(void)
{
	return ("AaaaaAAA");
}

Friend auto_fill()
{
	Friend	new_friend;

	std::cout << "Autofilling your contact!" << std::endl;
	new_friend.set_darkest_secret(random_string());
	new_friend.set_underwear_color(random_string());
	new_friend.set_favorite_meal(random_string());
	new_friend.set_birthday_date(random_string());
	new_friend.set_phone_number(random_string());
	new_friend.set_email_address(random_string());
	new_friend.set_postal_address(random_string());
	new_friend.set_login(random_string());
	new_friend.set_nickname(random_string());
	new_friend.set_last_name(random_string());
	new_friend.set_first_name(random_string());
	return (new_friend);
}

Friend	get_info()
{
	Friend		new_friend;
	std::string	tmp;

	std::cout << "Cool, Let's add a new friend to lame_phonebook™" << std::endl;
	std::cout << "First name: ";
	std::cin.clear();
	/* std::cin.ignore(numeric_limits<streamsize>::max(), '\n'); */
	getline(std::cin, tmp);
	new_friend.set_first_name(tmp);
	std::cout << "Last name: ";
	getline(std::cin, tmp);
	new_friend.set_last_name(tmp);
	std::cout << "Nickname: ";
	getline(std::cin, tmp);
	new_friend.set_nickname(tmp);
	std::cout << "Login: ";
	getline(std::cin, tmp);
	new_friend.set_login(tmp);
	std::cout << "Postal address: ";
	getline(std::cin, tmp);
	new_friend.set_postal_address(tmp);
	std::cout << "Email address: ";
	getline(std::cin, tmp);
	new_friend.set_email_address(tmp);
	std::cout << "Phone number: ";
	getline(std::cin, tmp);
	new_friend.set_phone_number(tmp);
	std::cout << "Birthday date: ";
	getline(std::cin, tmp);
	new_friend.set_birthday_date(tmp);
	std::cout << "Favorite meal: ";
	getline(std::cin, tmp);
	new_friend.set_favorite_meal(tmp);
	std::cout << "Underwear color: ";
	getline(std::cin, tmp);
	new_friend.set_underwear_color(tmp);
	std::cout << "Darkest secret: ";
	getline(std::cin, tmp);
	new_friend.set_darkest_secret(tmp);
	return (new_friend);
}

std::string	welcome_prompt()
{
	std::string	input;

	std::cout << "Hi and WELCOME to the lame_phonebook™" << std::endl
		<< "Use SEARCH to browse your contacts, ADD to add one, "
		<< "and EXIT to... exit" << std::endl
		<< "What may I do for you today? ";
	getline(std::cin, input);
	return (input);
}

int		main(void)
{
	std::string	input;
	Friend	friends[8];
	int		friend_count;

	input = welcome_prompt();
	friend_count = 0;
	while (input != "EXIT")
	{
		if ((input == "ADD" || input == "a" || input == "aa")
				&& friend_count >= 8)
			std::cout << "You can't add any more friends to lame_phonebook™" << std::endl;
		else if (input == "ADD" || input == "a")
			friends[friend_count++] = get_info();
		else if (input == "aa")
			friends[friend_count++] = auto_fill();
		else if ((input == "SEARCH" || input == "s") && friend_count > 0)
			search_cmd(friends, friend_count);
		else if (input == "SEARCH" || input == "s")
			std::cout << "Come on... You don't have any friends, face it." << std::endl;
		else
			std::cout << "You gotta learn how to write, this is unintelligible\n";
		std::cout << "What's next? ";
		getline(std::cin, input);
	}
	std::cout << "Okay, see you later! No refunds" << std::endl;
}
