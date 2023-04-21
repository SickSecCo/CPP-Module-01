#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
	int N = 5;
	
	Zombie *newZombie = zombieHorde(N, "Alessio");
	for (int i = 0; i < N; i++)
		newZombie[i].announce();
	delete [] newZombie;
}