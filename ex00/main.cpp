#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void randomChump(std::string name);
int main()
{
	Zombie *z1 = newZombie("z00");
	z1->announce();
	randomChump("z01");
	delete z1;
}
