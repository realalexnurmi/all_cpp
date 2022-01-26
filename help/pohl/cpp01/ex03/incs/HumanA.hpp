/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:17:04 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:53:48 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{

public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void	attack( void ) const;

	Weapon&	getWeapon( void ) const;

private:

	std::string	name;
	Weapon		&weapon;

};
