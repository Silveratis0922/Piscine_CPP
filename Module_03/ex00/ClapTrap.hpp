/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:25 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/07 15:54:36 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & copy);
	~ClapTrap(void);

	ClapTrap&	operator=(ClapTrap const & egl);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void		set_name(std::string name);
	std::string	get_name(void) const;


private:
	std::string	_name;
	static int			_hit_points;
	static int			_energy_points;
	static int			_attack_damage;
};

#endif
