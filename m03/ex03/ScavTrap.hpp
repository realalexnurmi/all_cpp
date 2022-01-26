/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:44:41 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 18:24:25 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	bool		_guardGateMode;
	bool		getGuardGateMode(void) const;
	void		setGuardGateMode(const bool mode);
public:
	ScavTrap(void);
	ScavTrap(const ScavTrap& init);
	ScavTrap(const std::string& name);
	virtual ~ScavTrap(void);

	ScavTrap&	operator=(const ScavTrap& assign);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		guardGate(void);
};




#endif
