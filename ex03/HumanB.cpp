#include "HumanB.hpp"

void HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}