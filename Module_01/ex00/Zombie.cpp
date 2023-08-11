#include "Zombie.hpp"
#include <string>

Zombie::Zombie(std::string name) : name(name)
{
	annonce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->get_name() << ": Brain Deeeeaaad...";
	std::cout << std::endl;
	return ;
}

std::string	Zombie::get_name(void)
{
		return (this->name);
}

void	Zombie::annonce(void)
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}
