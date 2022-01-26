#include "FragTrap.hpp"

int main() {
	FragTrap dino("Godzilla"), gorilla("King-Kong");
	std::cout << std::endl;
	dino.attack(gorilla.getName());
	gorilla.takeDamage(dino.getDamage());
	gorilla.attack(dino.getName());
	dino.takeDamage(gorilla.getDamage());
	std::cout << std::endl;
	FragTrap monkey(gorilla);
	monkey.highFivesGuys();
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	std::cout << std::endl;
}