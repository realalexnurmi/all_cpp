#include "FragTrap.hpp"
# define MAX_ENERGY 100
# define MAX_HEALTH 100
# define DEFAULT_DAMAGE 30

FragTrap::FragTrap () : ClapTrap() {
	std::cout << "Unknown FragTrap appeared on the battlefield!\n";
	name = "Unknown Frag";
	health = MAX_HEALTH;
	energy = MAX_ENERGY;
	damage = DEFAULT_DAMAGE;
}

FragTrap::FragTrap (std::string str) : ClapTrap(str) {
	std::cout << "FragTrap " << str << " appeared on the battlefield!\n";
	name = str;
	health = MAX_HEALTH;
	energy = MAX_ENERGY;
	damage = DEFAULT_DAMAGE;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
	std::cout << "FragTrap " << copy.name << " invited his brother!\n";
	name = "Brother of " + copy.name;
	health = copy.health;
	energy = copy.energy;
	damage = copy.damage;
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap " << name << " leave the battlefield.\n";
}

FragTrap& FragTrap::operator=(const FragTrap &obj) {
	std::cout << "FragTrap " << name << " steal the specifications from FragTrap " << obj.name << "!\n";
	health = obj.health;
	energy = obj.energy;
	damage = obj.damage;
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "Positive high fives request.\n";
}
