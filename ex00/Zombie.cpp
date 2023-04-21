#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << "Zombie: " << this->name << " was created" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie named: " << this->name << " was destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
