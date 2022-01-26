/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:17:04 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:53:56 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{

public:

	HumanB( std::string name );
	~HumanB( void );

	void	attack( void ) const;

	Weapon&	getWeapon( void ) const;
	bool	setWeapon( Weapon& newWeapon );

private:

	std::string	name;
	Weapon		*weapon;

};
