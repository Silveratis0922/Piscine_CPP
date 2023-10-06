/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:30:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/06 15:45:38 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//ShrubberyCreationForm  		Required grades: sign 145, exec 137
//RobotomyRequestForm			Required grades: sign 72, exec 45
//PresidentialPardonForm		Required grades: sign 25, exec 5

int	main(void)
{
/*	AForm		test("Testing", 80, 120);
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
	return (0);*/
	ShrubberyCreationForm	S("Shrub");
	RobotomyRequestForm		R("Robot");
	PresidentialPardonForm	P("President");
	Bureaucrat				nop("Bob", 1);

	try
	{
		S.beSigned(nop);
		R.beSigned(nop);
		P.beSigned(nop);
		S.execute(nop);
		std::cout << std::endl;
		R.execute(nop);
		std::cout << std::endl;
		P.execute(nop);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
