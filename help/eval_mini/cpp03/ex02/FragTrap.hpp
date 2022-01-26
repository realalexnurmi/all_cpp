#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string str);
		FragTrap(const FragTrap& copy);
		~FragTrap();
		FragTrap& operator = (const FragTrap& obj);
		void highFivesGuys();
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
};

#endif