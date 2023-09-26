/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:59:35 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/18 17:10:33 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "WrongCat.hpp"

class	WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(WrongCat const & copy);
	~WrongCat(void);

	WrongCat&	operator=(WrongCat const & egl);

	void	makeSound(void) const;

private:
};

#endif
