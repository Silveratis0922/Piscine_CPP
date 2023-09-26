/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:09 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/15 15:20:38 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("no_name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
	return ;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	*this = copy;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & egl)
{
	if (this != &egl)
		this->_name = egl.get_name();
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", ";
		std::cout << "causing " << this->_attack_damage << " points damage!" << std::endl;
		this->_energy_points--;
	}
	else if (this->_hit_points <= 0)
		std::cout << this->get_name() << " is dead. Attack cancelled." << std::endl;
	else if (this->_energy_points == 0)
	{
		std::cout << this->get_name() << " doesn't have Energy Points.";
		std::cout << " Shhhhtt, let him sleep! ...Zzz." << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
		std::cout << this->_name << " is already die." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " taking " << amount;
		std::cout << " points of damage." << std::endl;
		this->_hit_points -= amount;
		if (this->_hit_points <= 0)
			std::cout << this->_name << " is dead.." << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points != 0 && this->_energy_points != 0)
	{
		this->_hit_points = this->_hit_points + amount;
		this->_energy_points--;
	}
	else if (this->_hit_points == 0)
		std::cout << this->get_name() << " already dead. Healing cancelled" << std::endl;
	else if (this->_energy_points == 0)
	{
		std::cout << this->get_name() << " Not enought energy for that.";
		std::cout << " For anything else actually." << std::endl;
	}
	return ;
}

void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

std::string	ClapTrap::get_name(void) const
{
	return (this->_name);
}

void	ClapTrap::info_character(void)
{
		std::cout << "      Name : " << this->_name << std::endl;
		std::cout << "Hit Points : " << this->_hit_points << std::endl;
		std::cout << "Energy Pts : " << this->_energy_points << std::endl;
		std::cout << "Attack Dmg : " << this->_attack_damage << std::endl;
}
