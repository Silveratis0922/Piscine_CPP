/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:53:35 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 17:10:24 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class	WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & copy);
	virtual ~WrongAnimal(void);

	WrongAnimal&	operator=(WrongAnimal const & egl);
	
	std::string     getType(void) const;
	virtual void    makeSound(void) const;

protected:
	std::string		_type;
};

#endif
