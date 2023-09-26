/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:53:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/20 14:46:48 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
public:
	Cat(void);
	Cat(Cat const & copy);
	~Cat(void);

	Cat&	operator=(Cat const & egl);

	void	makeSound(void) const;

private:
	Brain*	_catbrain;
};

#endif
