/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl </var/spool/mail/pohl>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:32:16 by pohl              #+#    #+#             */
/*   Updated: 2021/07/19 17:54:53 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{

public:

	Zombie( std::string name );
	~Zombie( void );

	void		announce( void ) const;

	std::string	getName( void ) const;

private:

	void		prefix( void ) const;

	std::string name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
