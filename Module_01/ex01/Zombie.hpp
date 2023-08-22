/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:16:20 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/14 11:16:23 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
