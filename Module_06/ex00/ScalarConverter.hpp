/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:00:00 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/09 16:00:00 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class	ScalarConverter
{
	public:
		ScalarConverter(void); //default constructor
		ScalarConverter(ScalarConverter const & src); //copy constructor
		ScalarConverter & operator=(ScalarConverter const & rhs); //copy assignment operator
		~ScalarConverter(void); //destructor

	protected:
	private:
};

std::ostream&   operator<<(std::ostream& o, ScalarConverter const & a);

#endif
