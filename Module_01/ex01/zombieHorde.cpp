/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:15:42 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/14 11:15:43 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		Horde[i].set_name(name);
	return (Horde);		
}
