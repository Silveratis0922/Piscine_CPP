/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:41:45 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/22 11:58:01 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
public:
		HumanB(std::string name);
		~HumanB(void);

		void		attack(void);
		void		setWeapon(Weapon& weapon);
		void		set_name(std::string name);
		std::string	get_name(void);

private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
