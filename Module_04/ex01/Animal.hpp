/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:39:50 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 16:51:36 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
public:
	Animal(void);
	Animal(Animal const & copy);
	virtual ~Animal(void);

	Animal&	operator=(Animal const & egl);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;

protected:
	std::string		_type;
};

#endif
