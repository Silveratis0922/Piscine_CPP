/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:53:10 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/21 15:57:40 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	_catbrain = new Brain();
	this->_type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
	return ;
}

Cat::Cat(Cat const & copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Cat::~Cat(void)
{
	delete (_catbrain);
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const & egl)
{
	if (this != &egl)
	{
		this->_type = egl._type;
		_catbrain = new Brain(*egl._catbrain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	return ;
}
