#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();
		ScavTrap& operator = (const ScavTrap& obj);
		void guardGate();
		void attack(std::string const &target);
};

#endif