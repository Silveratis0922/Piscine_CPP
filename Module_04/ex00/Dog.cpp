/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:53:10 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 16:06:21 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
	return ;
}

Dog::Dog(Dog const & copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

Dog&	Dog::operator=(Dog const & egl)
{
	if (this != &egl)
		this->_type = egl._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
	return ;
}
