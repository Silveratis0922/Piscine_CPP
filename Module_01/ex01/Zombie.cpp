#include "Zombie.hpp"
#include <string>

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->get_name() << ": Brain Deeeeaaad...";
	std::cout << std::endl;
	return ;
}

void	Zombie::annonce(void)
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}

std::string	Zombie::get_name(void)
{
		return (this->name);
}

void	Zombie::set_name(std::string name)
{
		this->name = name;
}
