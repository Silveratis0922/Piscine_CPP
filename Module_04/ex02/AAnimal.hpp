/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:39:50 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/21 15:00:54 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal
{
public:
	AAnimal(void);
	AAnimal(AAnimal const & copy);
	virtual ~AAnimal(void);

	AAnimal&	operator=(AAnimal const & egl);

	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;

protected:
	std::string		_type;
};

#endif
