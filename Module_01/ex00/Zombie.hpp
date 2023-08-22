/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:17:02 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/14 11:17:03 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
