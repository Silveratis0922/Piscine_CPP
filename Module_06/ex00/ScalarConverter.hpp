/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:00:00 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/10 13:21:53 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <vector>

class	ScalarConverter
{
	public:
		ScalarConverter(void); //default constructor
		ScalarConverter(ScalarConverter const & src); //copy constructor
		ScalarConverter & operator=(ScalarConverter const & rhs); //copy assignment operator
		~ScalarConverter(void); //destructor

		static void		convert(std::string str);
		static bool		isChar(std::string str);
		static bool		isInt(std::string str);
		static bool		isFloat(std::string str);
		static bool		isDouble(std::string str);
};

std::ostream&   operator<<(std::ostream& o, ScalarConverter const & a);

#endif
