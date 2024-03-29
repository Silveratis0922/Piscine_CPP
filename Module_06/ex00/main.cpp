/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:23:28 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/23 10:51:59 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter only one argument." << std::endl;
		return (1);
	}
	std::string str = argv[1];

	if (str.length() == 0)
		return (std::cout << "Empty argument" << std::endl, 0);

	ScalarConverter::convert(str);
	return (0);
}
