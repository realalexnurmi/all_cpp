/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl </var/spool/mail/pohl>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:32:16 by pohl              #+#    #+#             */
/*   Updated: 2021/07/19 18:13:56 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{

public:

	Zombie( void );
	~Zombie( void );

	void		announce( void ) const;

	std::string	getName( void ) const;
	bool		setName( std::string newName );

private:

	void		prefix( void ) const;

	std::string name;
};

Zombie	*zombieHorde( int numberOfZombies, std::string name );

#endif
