/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:06:36 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/25 16:47:15 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base::~Base(void)
{
	std::cout << "Base destructor called" << std::endl;
	return
}

Base*	Base::generate(void);
{
	srand((unsigned) time(NULL));
	int		random = rand() % 3;

	std::cout << "Random = " << std::endl;
	if (random == 0)
		return (dynamic_cast<A>();
	else if (random == 1)
		return (dynamic_cast<B>();
	else
		return (dynamic_cast<C>();
}
