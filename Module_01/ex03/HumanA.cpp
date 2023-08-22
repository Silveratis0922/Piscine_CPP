/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:39:47 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/22 12:15:25 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	set_name(name);
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

std::string	HumanA::get_name(void)
{
	return (this->name);
}

void	HumanA::set_name(std::string name)
{
	this->name = name;
}

void	HumanA::attack(void)
{
		std::cout << get_name();
		std::cout << " attacks with their ";
		std::cout << weapon.getType();
		std::cout << std::endl;
}
