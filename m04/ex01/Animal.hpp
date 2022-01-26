/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:06:36 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 21:01:59 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
protected:
	std::string			_type;
public:
	Animal(void);
	Animal(const Animal& init);
	virtual ~Animal(void);

	virtual Animal&		operator=(const Animal& other);

	const std::string&	getType(void) const;
	void				setType(const std::string& type);
	virtual void		makeSound(void) const;
};

#endif
