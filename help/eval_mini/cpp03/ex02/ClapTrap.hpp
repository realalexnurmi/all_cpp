#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	protected:
		std::string name;
		int		health;
		int		energy;
		int		damage;
	public:
		ClapTrap();
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();

		ClapTrap& operator = (const ClapTrap& obj);

		void beRepaired(unsigned int amount);

		std::string getName(void);
		int getHealth(void);
		int getEnergy(void);
		int getDamage(void);

		void setHealth(int value);
		void setEnergy(int value);
		void setDamage(int value);

		virtual void attack(std::string const &target);
		virtual void takeDamage(unsigned int amount);
};

#endif