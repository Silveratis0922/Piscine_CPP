/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:33:14 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/20 17:52:08 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
#include <cstdio>

class	Brain
{
public:
	Brain(void);
	Brain(Brain const & copy);
	~Brain(void);

	Brain&	operator=(Brain const & egl);

	void	set_ideas(void);
	std::string		get_ideas(int array);

private:
	std::string	_ideas[100];
};

#endif
