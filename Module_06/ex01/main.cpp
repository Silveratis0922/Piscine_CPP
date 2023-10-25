/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:11:28 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/25 16:03:34 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "data.h"

int	main(void)
{
	Data		test = {42};

	uintptr_t	ser = Serializer::serialize(&test);
	std::cout << "Serialized adress : " << ser << std::endl;

	Data*		test2 = Serializer::deserialize(ser);
	std::cout << "Deserialised value : " << test2->i << std::endl;
	return (0);
}
