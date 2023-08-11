#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP

#include <iostream>
#include <string>

class	Zombie
{
public:

	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void		annonce(void);
	std::string	get_name(void);
	void		set_name(std::string name);

private:

	std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
