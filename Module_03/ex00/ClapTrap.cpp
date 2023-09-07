/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:09 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/07 16:03:08 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	ClapTrap::_hit_points = 10;
int	ClapTrap::_energy_points = 10;
int	ClapTrap::_attack_damage = 0;

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	set_name(name);
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
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
	//verifier que l'attaquant a encore des PV et PE dans un premier temps 
	//si l'attaquant n'a pas de vie alors l'attaquant est mort sinon l'attaquant 
	//n'a pas assez de points d'action
	//si tout est bon, alors verifier que la target est vivante, si c'est pas le cas
	//Alors afficher comme quoi la cible est deja morte
	//si elle est vivante alors nickel
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", ";
	//operateur-- pour l'energie utiliser pour l'attaquant;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "causing " << amount << " points of damage!" << std::endl;
	//operateur- pour le nombre de pv perdu a la cible;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	//Verifier que la personne a bien encore des PV et PE.
	(void)amount;
	//operateur+ pour le nombre de PV rendu ( a condition que la cible est encore vivante
	//ou a encore des points d'actions
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
