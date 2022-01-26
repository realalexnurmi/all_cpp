#include "ClapTrap.hpp"
# define MAX_ENERGY 10
# define MAX_HEALTH 10
# define DEFAULT_DAMAGE 0

ClapTrap::ClapTrap() {
	std::cout << "Unknown ClapTrap appeared on the battlefield!\n";
	name = "Unknown Clap";
	health = MAX_HEALTH;
	energy = MAX_ENERGY;
	damage = DEFAULT_DAMAGE;
}

ClapTrap::ClapTrap(std::string str) {
	std::cout << "ClapTrap " << str << " appeared on the battlefield!\n";
	name = str;
	health = MAX_HEALTH;
	energy = MAX_ENERGY;
	damage = DEFAULT_DAMAGE;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "ClapTrap " << copy.name << " invited his brother!\n";
	name = "Brother of " + copy.name;
	health = copy.health;
	energy = copy.energy;
	damage = copy.damage;
}

ClapTrap::~ClapTrap () {
	std::cout << "ClapTrap " << name << " leave the battlefield.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj) {
	std::cout << "ClapTrap " << name << " steal the specifications from ClapTrap " << obj.name << "!\n";
	health = obj.health;
	energy = obj.energy;
	damage = obj.damage;
	return *this;
}

void ClapTrap::attack(std::string const &target) {
	if (energy > 0) {
		std::cout << name << " attack " << target << ", causing " << damage << " points of damage. " << name << " lost 1 EP.\n";
		energy--;
	}
	else
		std::cout << name << " has not enough energy to attack.\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= health) {
		std::cout << name << " take damage! " << amount << " HP lost. He's defeated!\n";
		health = 0;
	}
	else {
		std::cout << name << " take damage! " << amount << " HP lost.\n";
		health -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energy < MAX_ENERGY) {
		energy += amount;
		if (energy > MAX_ENERGY) {
			std::cout << name << " replenished the energy reserve! His EP is 10!\n";
			energy = MAX_ENERGY;
		}
		else {
			std::cout << name << " be repaired! " << amount << " EP restored.\n";
		}
	}
	else {
		std::cout << name << " couldn't be repaired! He already has maximum EP.\n";
	}
}

std::string ClapTrap::getName(void) {
	return (name);
}

int ClapTrap::getHealth(void) {
	return (health);
}
int ClapTrap::getEnergy(void) {
	return (energy);
}
int ClapTrap::getDamage(void) {
	return (damage);
}

void ClapTrap::setHealth(int value) {
	health = value;
	if (health > MAX_HEALTH)
		health = MAX_HEALTH;
	if (health <= 0) {
		std::cout << name << " lose!\n";
		health = 0;
	}
}
void ClapTrap::setEnergy(int value) {
	energy = value;
	if (energy > MAX_ENERGY)
		energy = MAX_ENERGY;
	if (energy <= 0) {
		energy = 0; 
	}
}
void ClapTrap::setDamage(int value) {
	damage = value;
	if (damage < 0)
		damage = 0;
}
