/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:04:22 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 17:12:31 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & copy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = copy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(WrongCat const & egl)
{
	if (this != &egl)
		this->_type = egl._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaooof" << std::endl;
}
