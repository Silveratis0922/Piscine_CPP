/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:33:22 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/22 11:49:42 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iostream>

class	Weapon
{
public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		std::string	getType(void);
		void		setType(std::string type);

private:
		std::string	_type;
};

#endif
