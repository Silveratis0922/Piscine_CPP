/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:28:10 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 11:12:16 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called." << std::endl;
	this->_name = "no_name";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap name constructor called." << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const & copy)
{
	std::cout << "FragTrap Copy constructor called." << std::endl;
	*this = copy;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const & egl)
{
	if (this != &egl)
	{
		this->_name = egl._name;
		this->_hit_points = egl._hit_points;
		this->_energy_points = egl._energy_points;
		this->_attack_damage = egl._attack_damage;
	}
	return(*this);
}

void    FragTrap::attack(const std::string& target)
{
    if (this->_hit_points > 0 && this->_energy_points > 0)
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", ";
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Yeah ! High Five guys !!" << std::endl;
	return ;
}
