/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:45:39 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/25 12:27:53 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	std::string	str = argv[1];
	Harl	test;
	if (str.compare("DEBUG") == 0)
	{
		test.debug();
	}
	else if (str.compare("INFO") == 0)
		test.info();
	else if (str.compare("WARNING") == 0)
		test.warning();
	else if (str.compare("ERROR") == 0)
		test.error();
	return (0);
}
