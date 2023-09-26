/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:57:00 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:23 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type =  "no_type";
	std::cout << "WrongAnimal default constructor called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called." << std::endl;
	return ;
}

WrongAnimal&		WrongAnimal::operator=(WrongAnimal const & egl)
{
	std::cout << "WrongAnimal operator = called." << std::endl;
	if (this != &egl)
		this->_type = egl._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << " Wrong Wrong" << std::endl;
	return ;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}
