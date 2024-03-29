/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:49:58 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/28 14:32:09 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class	Harl
{
public:

		Harl(void);
		~Harl(void);

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	complain(std::string level);

private:
};

#endif
