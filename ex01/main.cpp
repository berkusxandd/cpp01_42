#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name);

int main()
{
	int n = 5;
	Zombie *zombies = zombieHorde(n,"basicZombie");
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
}
