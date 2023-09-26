/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:53:10 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 17:05:20 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void)
{
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
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const & egl)
{
	if (this != &egl)
		this->_type = egl._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	return ;
}
