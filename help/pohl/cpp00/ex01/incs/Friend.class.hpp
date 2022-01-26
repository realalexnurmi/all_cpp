/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Friend.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:23:11 by paulohl           #+#    #+#             */
/*   Updated: 2021/05/04 18:51:35 by ft               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Friend {

public:
	std::string	trim_len(std::string info);
	void		print_summary(int id);
	void		print_info(void);

	std::string get_first_name(void) const;
	bool		set_first_name(std::string first_name);

	std::string	get_last_name(void) const;
	bool		set_last_name(std::string last_name);

	std::string	get_nickname(void) const;
	bool		set_nickname(std::string nickname);

	std::string	get_login(void) const;
	bool		set_login(std::string login);

	std::string	get_postal_address(void) const;
	bool		set_postal_address(std::string postal_address);

	std::string	get_email_address(void) const;
	bool		set_email_address(std::string email_address);

	std::string	get_phone_number(void) const;
	bool		set_phone_number(std::string phone_number);

	std::string	get_birthday_date(void) const;
	bool		set_birthday_date(std::string birthday_date);

	std::string	get_favorite_meal(void) const;
	bool		set_favorite_meal(std::string favorite_meal);

	std::string	get_underwear_color(void) const;
	bool		set_underwear_color(std::string underwear_color);

	std::string	get_darkest_secret(void) const;
	bool		set_darkest_secret(std::string darkest_secret);

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};
