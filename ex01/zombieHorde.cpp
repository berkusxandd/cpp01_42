#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *zHorde = new Zombie[n];
	for (int i = 0; i < n; i++)
		zHorde[i].setName(name);
	return zHorde;
}
