/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:10:37 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/04 14:44:36 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::_decimal = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
	return ;
}

Fixed::Fixed(int const  i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_integer = i << this->_decimal;
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_integer = roundf(f * (1 << this->_decimal));
	return ;
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(Fixed const & egl)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &egl)
		this->_integer = egl.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_integer);
}

void	Fixed::setRawBits(int const raw)
{
	this->_integer = raw;
}

int		Fixed::toInt(void) const
{
	return ((int)this->toFloat());
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_integer / (float)(1 << this->_decimal));
}

std::ostream&	operator<<(std::ostream& o, Fixed const & a)
{
	o << a.toFloat();
	return (o);
}
