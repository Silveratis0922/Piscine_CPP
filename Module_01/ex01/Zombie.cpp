/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:15:30 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/14 11:15:32 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
