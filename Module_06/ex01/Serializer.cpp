/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:06:42 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/25 15:51:07 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Serializer Default constructor called" << std::endl;
	return ;
}

Serializer::Serializer(Serializer const & src)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	std::cout << "Serializer Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

Serializer::~Serializer(void)
{
	std::cout << "Serializer Destructor called" << std::endl;
	return ;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* 		Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

std::ostream&   operator<<(std::ostream& o, Serializer const & a)
{
	(void) a;
	return (o);
}
