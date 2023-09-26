/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:39:53 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 15:51:27 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type =  "no_type";
	std::cout << "Animal default constructor called." << std::endl;
	return ;
}

Animal::Animal(Animal const & copy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}

Animal&		Animal::operator=(Animal const & egl)
{
	std::cout << "Animal operator = called." << std::endl;
	if (this != &egl)
		this->_type = egl._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Bong Bong" << std::endl;
	return ;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}
