#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{	
	return (new Zombie(name));
}