/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:53:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/21 15:41:10 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{
public:
	Dog(void);
	Dog(Dog const & copy);
	~Dog(void);

	Dog&	operator=(Dog const & egl);

	void	makeSound(void) const;
	Brain*	get_brain(void) const;

private:
	Brain*	_dogbrain;
};

#endif
