/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:24:46 by pohl              #+#    #+#             */
/*   Updated: 2021/10/12 14:43:38 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{

public:

	MateriaSource( void );
	MateriaSource( const MateriaSource &src );
	~MateriaSource( void );

	MateriaSource	&operator=( const MateriaSource &other );

	virtual void		learnMateria(AMateria *materia_to_learn);
	virtual AMateria	*createMateria(std::string const & type);

	void			printMaterias( void ) const ;

private:

	const static int	_materias_size = 4;

	AMateria		*_materias[MateriaSource::_materias_size];
	int			_number_learned;

};

#endif
