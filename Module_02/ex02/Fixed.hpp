/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:11:42 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/07 14:16:39 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class	Fixed
{
public:
	
	Fixed(void);
	Fixed(Fixed const & copy);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed(void);

	Fixed&	operator=(Fixed const & egl);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(Fixed const & greater);
	bool	operator<(Fixed const & less);
	bool	operator>=(Fixed const & grt_eg);
	bool	operator<=(Fixed const & less_eg);
	bool	operator==(Fixed const & same);
	bool	operator!=(Fixed const & diff);

	Fixed	operator+(Fixed const & add);
	Fixed	operator-(Fixed const & mns);
	Fixed	operator*(Fixed const & mlt);
	Fixed	operator/(Fixed const & dvd);

	Fixed	operator++(int);						//post incrementation(i++)
	Fixed&	operator++(void);						//pre  incrementation(++i)
	Fixed	operator--(int);						//post decrementation(i--)
	Fixed&	operator--(void);						//pre  decrementation(--i)

	static Fixed	max(Fixed& first, Fixed& second);
	static Fixed	max(Fixed const & first, Fixed const & second);
	static Fixed	min(Fixed& first, Fixed& second);
	static Fixed	min(Fixed const & first, Fixed const & second);

private:

	int			_integer;
	static int	_decimal;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & a);

#endif
