/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:06:42 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/25 15:42:41 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include "stdint.h"
#include "data.h"

class	Serializer
{
	public:
		Serializer(void); //default constructor
		Serializer(Serializer const & src); //copy constructor
		Serializer & operator=(Serializer const & rhs); //copy assignment operator
		~Serializer(void); //destructor

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

std::ostream&   operator<<(std::ostream& o, Serializer const & a);

#endif
