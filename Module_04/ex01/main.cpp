/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:48:03 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/21 16:23:10 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void	test_tab(void)
{
	unsigned int	nbr = 50;
	Animal	*animal_tab[nbr];

	for (unsigned int i = 0; i < nbr / 2; i++)
		animal_tab[i] = new Cat();

	for (unsigned int i = nbr / 2; i < nbr; i++)
		animal_tab[i] = new Dog();

	for (unsigned int i = 0; i < nbr; i++)
		delete animal_tab[i];
}

void	test_intra(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
}

int main()
{
	Dog	*test = new Dog;
	Dog test2 = *test;

	for (int i = 3; i < 9; i++)
		std::cout << test->get_brain()->get_ideas(i) << std::endl;
	
	test2.get_brain()->set_ideas("new idea");
	std::cout << "test idea 0: " << test->get_brain()->get_ideas(0) << std::endl;
	std::cout << "test2 idea 0: " << test2.get_brain()->get_ideas(0) << std::endl;
	//test_tab();
	//test_intra();
	delete test;
	return (0);
}
