/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:23:27 by pohl              #+#    #+#             */
/*   Updated: 2021/10/12 13:42:39 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{

public:

	virtual ~IMateriaSource() {}
	virtual void		learnMateria(AMateria *materia_to_learn) = 0;
	virtual AMateria	*createMateria(std::string const & type) = 0;

};

#endif
