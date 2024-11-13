#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
class Weapon
{
	public:
		Weapon();
		Weapon(std::string typeName);
		~Weapon();
		void setType(std::string typeName);
		const std::string &getType() const;
	private:
		std::string type;
};

#endif
