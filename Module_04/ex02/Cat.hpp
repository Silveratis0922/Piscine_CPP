/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:53:08 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/21 15:07:43 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
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
