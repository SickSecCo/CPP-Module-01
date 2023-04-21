#include "Zombie.hpp"

int main() {
	Zombie *zombie = newZombie("Alessio");
	zombie->announce();
	randomChump("Federico");
	delete zombie;
}
