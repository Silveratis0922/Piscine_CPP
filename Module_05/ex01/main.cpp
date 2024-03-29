/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:30:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/04 12:01:24 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Form		test("Testing", 80, 120);
	Bureaucrat	nop("Bob", 70);
	Bureaucrat  yep("DD", 100);

	try
	{
	nop.signForm(test);
	std::cout << test << std::endl;
	test.beSigned(nop);
	std::cout << test << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << yep << std::endl;
	yep.signForm(test);
	return (0);
}
