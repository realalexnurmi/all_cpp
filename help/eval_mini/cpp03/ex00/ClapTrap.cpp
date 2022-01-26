#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Unknown fighter appeared on the battlefield, but he's too weak to participate the battle!\n";
	name = "Unknown fighter";
	health = 1;
	energy = 0;
	damage = 0;
}

ClapTrap::ClapTrap(std::string str) {
	std::cout << str << " appeared on the battlefield!\n";
	this->name = str;
	this->health = MAX_HEALTH;
	this->energy = MAX_ENERGY;
	this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << copy.name << " invited his brother!\n";
	name = "Brother of " + copy.name;
	health = copy.health;
	energy = copy.energy;
	damage = copy.damage;
}

ClapTrap::~ClapTrap () {
	std::cout << name << " leave the battlefield.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj) {
	std::cout << name << " steal the specifications from " << obj.name << "!\n";
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
		std::cout << this->name << " take damage! " << amount << " HP lost. He's defeated!\n";
		health = 0;
	}
	else {
		std::cout << this->name << " take damage! " << amount << " HP lost.\n";
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
