/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:46:42 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/22 12:15:43 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{	
	set_name(name);
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
void	HumanB::attack(void)
{
	if (this->_weapon->getType().empty() == 0)
	{
		std::cout << get_name();
		std::cout << " attacks with their ";
		std::cout << _weapon->getType();
		std::cout << std::endl;
	}
	else
	{
		std::cout << get_name();
		std::cout << " does not have weapon" << std::endl;
	}
}

void	HumanB::set_name(std::string name)
{
	this->_name = name;
}

std::string	HumanB::get_name(void)
{
	return (this->_name);
}
