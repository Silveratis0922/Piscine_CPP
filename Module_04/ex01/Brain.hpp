/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:33:14 by tchantro          #+#    #+#             */
/*   Updated: 2023/09/21 15:50:38 by tchantro         ###   ########.fr       */
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
	void	set_ideas(std::string idea);
	std::string		get_ideas(int array);

private:
	std::string	_ideas[100];
};

#endif
