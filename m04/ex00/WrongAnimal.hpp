/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:06:43 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 19:32:38 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string			_type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& init);
	~WrongAnimal(void);

	WrongAnimal&		operator=(const WrongAnimal& other);

	const std::string&	getType(void) const;
	void				setType(const std::string& type);
	void				makeSound(void) const;
};


#endif