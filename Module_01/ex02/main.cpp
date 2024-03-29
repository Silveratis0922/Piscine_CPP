/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:17:43 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/22 12:24:45 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string 	brain = "HI THIS IS BRAIN";
	std::string*	brain_ptr = &brain;
	std::string&	brain_ref = brain;


	std::cout << "String adress : " << &brain << std::endl;
	std::cout << "PTR    adress : " << brain_ptr << std::endl;
	std::cout << "REF    adress : " << &brain_ref << std::endl;

	std::cout << std::endl;
	brain_ref += " OK !";
	std::cout << "String value : " << brain << std::endl;
	std::cout << "PTR    value : " << *brain_ptr << std::endl;
	std::cout << "REF    value : " << brain_ref << std::endl;
	return (0);
}
