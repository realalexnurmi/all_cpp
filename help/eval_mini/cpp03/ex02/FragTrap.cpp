#include "FragTrap.hpp"
# define MAX_HEALTH 100
# define MAX_ENERGY 100
# define DEFAULT_DAMAGE 30

FragTrap::FragTrap () : ClapTrap() {
	std::cout << "Unknown FragTrap appeared on the battlefield, but he's too weak to participate the battle!\n";
	name = "Unknown Frag";
	health = 1;
	energy = 0;
	damage = 0;
}

FragTrap::FragTrap (std::string str) : ClapTrap(str) {
	std::cout << "FragTrap " << str << " appeared on the battlefield!\n";
	this->name = str;
	this->health = MAX_HEALTH;
	this->energy = MAX_ENERGY;
	this->damage = DEFAULT_DAMAGE;
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

void FragTrap::attack(std::string const &target) {
	if (energy > 0) {
		std::cout << "FragTrap " << name << " attack " << target << ", causing " << damage << " points of damage. FragTrap " << name << " lost 1 EP.\n";
		energy--;
	}
	else
		std::cout << name << " has not enough energy to attack.\n";
}

void FragTrap::takeDamage(unsigned int amount) {
	if (amount >= health) {
		std::cout << "FragTrap " << this->name << " take damage! " << amount << " HP lost. He's defeated!\n";
		health = 0;
	}
	else {
		std::cout << "FragTrap " << this->name << " take damage! " << amount << " HP lost.\n";
		health -= amount;
	}
}