/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:53:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 16:11:45 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal
{
public:
	Dog(void);
	Dog(Dog const & copy);
	~Dog(void);

	Dog&	operator=(Dog const & egl);

	void	makeSound(void) const;

private:
};

#endif
