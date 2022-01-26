/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:10:50 by enena             #+#    #+#             */
/*   Updated: 2022/01/12 21:29:14 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# define COUNT_FIELDS	5
# include <iostream>
# include <string>

class Contact
{
private:
	static std::string	fieldNames[COUNT_FIELDS];
	std::string			info[COUNT_FIELDS];
	
	enum				FieldName
	{
		FirstName = 0,
		LastName,
		Nickname,
		PhoneeNumber,
		DarkestSecret
	};
public:
	Contact(void);
	~Contact(void);
	
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickame(void);
	void		setContact(void);
	void		printContact(void);
};

#endif
