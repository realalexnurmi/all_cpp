/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:06:38 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 22:16:47 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	Cat(void);
	Cat(const Cat& init);
	~Cat(void);

	Cat&	operator=(const Cat& other);

	void	makeSound(void) const;
	void	whatInYourMind(unsigned int deep);
};

#endif