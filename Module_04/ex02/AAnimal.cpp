/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:39:53 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/21 15:01:55 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->_type =  "no_type";
	std::cout << "AAnimal default constructor called." << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & copy)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called." << std::endl;
	return ;
}

AAnimal&		AAnimal::operator=(AAnimal const & egl)
{
	std::cout << "AAnimal operator = called." << std::endl;
	if (this != &egl)
		this->_type = egl._type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Bong Bong" << std::endl;
	return ;
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}
