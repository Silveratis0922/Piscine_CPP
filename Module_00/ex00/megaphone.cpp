/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:36:28 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/15 14:45:22 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 1;

	if (argc != 1)
	{
		while (argv[j])
		{
			while (argv[j][i])
			{
				std::cout << (char)toupper(argv[j][i]);
				i++;
			}
			j++;
			i = 0;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
