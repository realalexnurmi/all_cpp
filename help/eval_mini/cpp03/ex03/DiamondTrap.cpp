#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "Unknown DiamondTrap appeared on the battlefield, but he's too weak to participate the battle!\n";
	name = "Unknown Diamond";
	ClapTrap::name = name + "_clap_name";
    health = FragTrap::health;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str) {
    ClapTrap::name = str + "_clap_name";
    std::cout << "DiamondTrap " << str << " appeared on the battlefield!\n";
    this->name = str;
    this->health = FragTrap::health;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy) {
	std::cout << "DiamondTrap " << copy.name << " invited his brother!\n";
	name = "Brother of DiamondTrap " + copy.name;
	health = copy.health;
	energy = copy.energy;
	damage = copy.damage;
}

DiamondTrap::~DiamondTrap () {
	std::cout << "DiamondTrap " << name << " leave the battlefield.\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj) {
	std::cout << "DiamondTrap " << name << " steal the specifications from DiamondTrap " << obj.name << "!\n";
	health = obj.health;
	energy = obj.energy;
	damage = obj.damage;
	return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is " << name << ".\n";
    std::cout << "ClapTrap name is " << ClapTrap::name << ".\n";
}

void DiamondTrap::attack(std::string const &target) {
    ScavTrap::attack(target);
}
