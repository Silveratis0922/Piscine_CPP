/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:37 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 10:51:16 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Bobby("Bobby");
	ClapTrap	Dodo("Bobby");

	//Bobby.attack("Daisy");
	//Dodo.attack("Daisy");
	Bobby.takeDamage(4);
	Dodo.takeDamage(4);
	return (0);
}
