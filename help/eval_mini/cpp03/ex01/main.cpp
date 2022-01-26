#include "ScavTrap.hpp"

int main() {
	ScavTrap dino("Godzilla"), gorilla("King-Kong");
	std::cout << std::endl;
	dino.attack(gorilla.getName());
	gorilla.takeDamage(dino.getDamage());
	gorilla.attack(dino.getName());
	dino.takeDamage(gorilla.getDamage());
	std::cout << std::endl;
	ScavTrap monkey(gorilla);
	monkey.attack(dino.getName());
	monkey.guardGate();
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	std::cout << std::endl;
}