/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:06:38 by enena             #+#    #+#             */
/*   Updated: 2022/01/25 19:51:42 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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