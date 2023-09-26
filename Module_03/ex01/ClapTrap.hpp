/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:25 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 11:00:02 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & copy);
	~ClapTrap(void);

	ClapTrap&	operator=(ClapTrap const & egl);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	info_character(void);

	void		set_name(std::string name);
	std::string	get_name(void) const;

protected:
	std::string	_name;
	int						_hit_points;
	unsigned int			_energy_points;
	unsigned int			_attack_damage;
};

#endif
