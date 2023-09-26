/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:33:26 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/20 18:16:45 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called." << std::endl;
	set_ideas();
	return ;
}

Brain::Brain(Brain const & copy)
{
	*this = copy;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
	return ;
}

Brain&	Brain::operator=(Brain const & egl)
{
	if (this != &egl)
	{
		for (int i = 0; i < 100; i++)	
			this->_ideas[i] = egl._ideas[i];
	}
	return (*this);
}

void	Brain::set_ideas(void)
{

	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			_ideas[i] = "Eat !";
		else
			_ideas[i] = "Sleep !";
	}
}

std::string		Brain::get_ideas(int array)
{
	return (this->_ideas[array]);
}
