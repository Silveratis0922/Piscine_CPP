/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:30:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/26 14:48:23 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	test("Richard", 120);

	std::cout << test << std::endl;
	std::cout << test++ << std::endl;
	std::cout << test << std::endl;
	return (0);
}
