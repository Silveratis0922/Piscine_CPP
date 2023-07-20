#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP

#include <iostream>
#include <string>

class	Zombie
{
public:

	Zombie(void);
	~Zombie(void);
	Zombie(std::string name);

	void		annonce(void);
	std::string	get_name(void);

private:

	std::string	name;
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);


#endif
