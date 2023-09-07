/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:10:37 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/06 14:41:20 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::_decimal = 8;

Fixed::Fixed(void)
{
	setRawBits(0);
	return ;
}

Fixed::Fixed(int const  i)
{
	this->_integer = i << this->_decimal;
	return ;
}

Fixed::Fixed(float const f)
{
	this->_integer = roundf(f * (1 << this->_decimal));
	return ;
}

Fixed::Fixed(Fixed const & copy)
{
	*this = copy;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed&	Fixed::operator=(Fixed const & egl)
{
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

bool	Fixed::operator>(Fixed const & greater)
{
	if (this->toFloat() > greater.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const & less)
{
	if (this->toFloat() < less.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const & grt_eg)
{
	if (this->toFloat() >= grt_eg.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const & less_eg)
{
	if (this->toFloat() <= less_eg.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const & same)
{
	if (this->toFloat() == same.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const & diff)
{
	if (this->toFloat() != diff.toFloat())
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(Fixed const & add)
{
	return Fixed(this->toFloat() + add.toFloat());
}

Fixed	Fixed::operator-(Fixed const & mns)
{
	return Fixed(this->toFloat() - mns.toFloat());
}

Fixed	Fixed::operator*(Fixed const & mlt)
{
	return Fixed(this->toFloat() * mlt.toFloat());
}

Fixed	Fixed::operator/(Fixed const & dvd)
{
	return Fixed(this->toFloat() / dvd.toFloat());
}

Fixed	Fixed::operator++(int)		//post incrementation
{
	Fixed	tmp = *this;
	++*this;
	return (tmp);
}

Fixed&	Fixed::operator++(void)			//pre  incrementation
{
	_integer++;
	return (*this);
}

Fixed	Fixed::operator--(int)		//post decrementation
{
	Fixed	tmp = *this;
	--*this;
	return (tmp);
}

Fixed&	Fixed::operator--(void)			//pre  decrementation
{
	_integer--;
	return (*this);
}

Fixed	Fixed::max(Fixed& first, Fixed& second)
{
	if (first > second)
		return (first);
	else
		return (second);
}

Fixed	Fixed::max(Fixed const & first, Fixed const & second)
{
	if (first.toFloat() > second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return (first);
	else
		return (second);
}

Fixed	Fixed::min(Fixed const & first, Fixed const & second)
{
	if (first.toFloat() < second.toFloat())
		return (first);
	else
		return (second);
}

std::ostream&	operator<<(std::ostream& o, Fixed const & a)
{
	o << a.toFloat();
	return (o);
}
