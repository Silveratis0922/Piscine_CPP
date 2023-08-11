#include <string>
#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie*	Bar = newZombie("New");

	randomChump("Random");
	delete  Bar;
	return (0);
}
