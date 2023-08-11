#include <string>
#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	int	nbr_Z = 5;

	if (nbr_Z < 0)
	{
		std::cout << "Negativ number of zombie ? Nah !";
		std::cout << std::endl;
		return (1);
	}
	Zombie	*horde = zombieHorde(nbr_Z, "Foo");

	for (int i = 0; i < nbr_Z; i++)
		horde[i].annonce();
	delete [] horde;
	return (0);
}
