#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string typeName)
{
	this->type = typeName;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string typeName)
{
	this->type = typeName;
}
