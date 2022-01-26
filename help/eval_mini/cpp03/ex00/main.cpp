#include "ClapTrap.hpp"

int main() {
	ClapTrap dino("Godzilla"), gorilla("King-Kong");
	std::cout << std::endl;
	dino.attack(gorilla.getName());
	gorilla.takeDamage(dino.getDamage());
	gorilla.attack(dino.getName());
	dino.takeDamage(gorilla.getDamage());
	std::cout << "They're confused...\n" << std::endl;
	ClapTrap monkey(gorilla);
	monkey.setDamage(5);
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	std::cout << std::endl;
	ClapTrap unknown;
	unknown = dino;
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	gorilla.takeDamage(unknown.getDamage());
	std::cout << std::endl;
	monkey.beRepaired(1);
	monkey.beRepaired(10);
	std::cout << std::endl;
	monkey.attack(unknown.getName());
	unknown.takeDamage(monkey.getDamage());
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	std::cout << std::endl;
}