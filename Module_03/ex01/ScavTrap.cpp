/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:48:19 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 10:50:14 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name	= "no_name";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_name	= name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & egl)
{
	if (this != &egl)
	{
		this->_name = egl._name;
		this->_hit_points = egl._hit_points;
		this->_energy_points = egl._energy_points;
		this->_attack_damage = egl._attack_damage;
	}
	return(*this) ;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points > 0 && this->_energy_points > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", ";
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

void	ScavTrap::guardGate(void)
{
	std::cout << "We are in guarGate function" << std::endl;
	return ;
}
