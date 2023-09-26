/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:53:10 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/20 17:25:40 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_dogbrain = new Brain();
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
	delete (_dogbrain);
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

Dog&	Dog::operator=(Dog const & egl)
{
	if (this != &egl)
	{
		this->_type = egl._type;
		_dogbrain = new Brain(*(egl._dogbrain));
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
	return ;
}

Brain*	Dog::get_brain(void) const
{
	return (this->_dogbrain);
}
