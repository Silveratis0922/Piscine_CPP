/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:48:03 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 17:09:09 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/*int	main(void)
{
	Animal Cheval;
	Dog Woof;
	Cat Miaou;

	Cheval.getType();
	Woof.getType();
	Miaou.getType();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Cheval.makeSound();
	Woof.makeSound();
	Miaou.makeSound();


	std::cout << std::endl;
	std::cout << std::endl;
	return(0);
}*/

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete (meta);
	delete (i);
	delete (j);
	return 0;
}
