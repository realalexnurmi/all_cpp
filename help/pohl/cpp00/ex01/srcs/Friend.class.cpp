/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Friend.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ft <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:51:59 by ft                #+#    #+#             */
/*   Updated: 2021/05/05 12:08:19 by ft               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Friend.class.hpp"
#include <iostream>
#include <iomanip>

std::string	Friend::trim_len(std::string info)
{
	if (info.length() >= 10)
		info = info.substr(0, 9).append(".");
	return (info);
}

void	Friend::print_summary(int id)
{
	std::cout << std::setfill(' ') << std::setw(10) << id;
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_len(first_name);
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_len(last_name);
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_len(nickname);
	std::cout << " |";
	std::cout << std::endl;
}

void	Friend::print_info()
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal_address << std::endl;
	std::cout << "Email address: " << this->email_address << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Birthday date: " << this->birthday_date << std::endl;
	std::cout << "Favorite meal: " << this->favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

std::string Friend::get_first_name(void) const
{
	return (this->first_name);
}

bool		Friend::set_first_name(std::string first_name)
{
	this->first_name = first_name;
	return (true);
}

std::string	Friend::get_last_name(void) const
{
	return (this->last_name);
}

bool		Friend::set_last_name(std::string last_name)
{
	this->last_name = last_name;
	return (true);
}

std::string Friend::get_nickname(void) const
{
	return (this->nickname);
}

bool		Friend::set_nickname(std::string nickname)
{
	this->nickname = nickname;
	return (true);
}

std::string Friend::get_login(void) const
{
	return (this->login);
}

bool		Friend::set_login(std::string login)
{
	this->login = login;
	return (true);
}

std::string Friend::get_postal_address(void) const
{
	return (this->postal_address);
}

bool		Friend::set_postal_address(std::string postal_address)
{
	this->postal_address = postal_address;
	return (true);
}

std::string Friend::get_email_address(void) const
{
	return (this->email_address);
}

bool		Friend::set_email_address(std::string email_address)
{
	this->email_address = email_address;
	return (true);
}

std::string Friend::get_phone_number(void) const
{
	return (this->phone_number);
}

bool		Friend::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
	return (true);
}

std::string Friend::get_birthday_date(void) const
{
	return (this->birthday_date);
}

bool		Friend::set_birthday_date(std::string birthday_date)
{
	this->birthday_date = birthday_date;
	return (true);
}

std::string Friend::get_favorite_meal(void) const
{
	return (this->favorite_meal);
}

bool		Friend::set_favorite_meal(std::string favorite_meal)
{
	this->favorite_meal = favorite_meal;
	return (true);
}

std::string Friend::get_underwear_color(void) const
{
	return (this->underwear_color);
}

bool		Friend::set_underwear_color(std::string underwear_color)
{
	this->underwear_color = underwear_color;
	return (true);
}

std::string Friend::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

bool		Friend::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
	return (true);
}
