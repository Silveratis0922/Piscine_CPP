/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:37 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 11:11:05 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	Foo("Foo");
	ScavTrap	Bobby("Bobby");
	FragTrap	Daisy("Daisy");

	Bobby.info_character();
	Foo.info_character();
	Daisy.info_character();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Bobby.attack("Coucou");
	Foo.attack("Coucou");
	Daisy.attack("Coucou");

	return (0);
}
