/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:06:36 by enena             #+#    #+#             */
/*   Updated: 2022/01/25 19:49:27 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal
{
protected:
	std::string			_type;
public:
	AAnimal(void);
	AAnimal(const AAnimal& init);
	virtual ~AAnimal(void);

	AAnimal&		operator=(const AAnimal& other);

	const std::string&	getType(void) const;
	void				setType(const std::string& type);
	virtual void		makeSound(void) const = 0;
};

#endif
