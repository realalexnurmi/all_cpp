/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:04:38 by enena             #+#    #+#             */
/*   Updated: 2022/01/14 20:50:35 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define CONTACT_MAX_COUNT	8
# define WIDTH_COLUMN		10
# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook
{
private:
	Contact		contacts[CONTACT_MAX_COUNT];
	std::string	command;
	size_t		count;
	size_t		addingPlace;
	bool		exit(void);
	void		add(void);
	void		search(void);
	std::string	trim_str(std::string str);
	void		print_head(void);
	void		print_info(size_t i);
	void		goOn(void);

public:
	PhoneBook(void);
	~PhoneBook(void);

	void		start(void);
	void		takeCommand(void);
	bool		react(void);
};

#endif
