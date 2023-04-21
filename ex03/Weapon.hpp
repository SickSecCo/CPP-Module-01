#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

	private:
		std::string type;

	public:
		Weapon(void){}
		Weapon(std::string name): type(name){}
		~Weapon(void) {}

		const std::string &getType(void);
		void setType(std::string new_type);
};


#endif
