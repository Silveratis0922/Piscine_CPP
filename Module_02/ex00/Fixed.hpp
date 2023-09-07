/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:11:42 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/04 11:45:39 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class	Fixed
{
public:
	
	Fixed(void);
	Fixed(Fixed const & copy);
	~Fixed(void);

	Fixed&	operator=(Fixed const & egl);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int	_integer;
	int	_decimal;
};

#endif
