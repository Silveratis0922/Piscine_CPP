/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:40:09 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/21 14:14:05 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void		attack(void);
		void		set_name(std::string name);
		std::string	get_name(void);

private:
		std::string	name;
		Weapon& weapon;
};

#endif
