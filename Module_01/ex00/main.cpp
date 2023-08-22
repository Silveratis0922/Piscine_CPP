/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:13:16 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/14 11:13:18 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie*	Bar = newZombie("New");

	randomChump("Random");
	delete  Bar;
	return (0);
}
