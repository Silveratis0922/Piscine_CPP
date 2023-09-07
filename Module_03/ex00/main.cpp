/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:37 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/07 15:56:23 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Bobby("Bobby");
	ClapTrap	Daisy("Daisy");

	Bobby.attack(Daisy.get_name());
	Daisy.takeDamage(4);

	return (0);
}
