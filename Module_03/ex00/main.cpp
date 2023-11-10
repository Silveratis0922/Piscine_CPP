/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:37 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/12 13:10:33 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Bobby("Bobby");
	ClapTrap	Daisy(Bobby);

	Bobby.info_character();
	Daisy.info_character();


	/*Bobby.info_character();
	Bobby.attack("Daisy");
	Bobby.takeDamage(4);
	Bobby.info_character();
	Bobby.attack("Daisy");
	Bobby.takeDamage(4);
	Bobby.info_character();
	Bobby.beRepaired(1);
	Bobby.beRepaired(1);
	Bobby.info_character();
	Bobby.beRepaired(1);
	Bobby.info_character();
	Bobby.beRepaired(1);
	Bobby.info_character();
	Bobby.takeDamage(4);
	Bobby.info_character();
	Bobby.beRepaired(1);
	Bobby.info_character();
	Bobby.beRepaired(1);
	Bobby.info_character();
	Bobby.beRepaired(1);
	Bobby.info_character();
	Bobby.beRepaired(1);
	Bobby.info_character();
	Bobby.attack("Daisy");
	Bobby.takeDamage(4);
	Bobby.beRepaired(1);
	Bobby.beRepaired(1);
	Bobby.info_character();
	Bobby.attack("Daisy");
	Bobby.takeDamage(4);*/
	return (0);
}
