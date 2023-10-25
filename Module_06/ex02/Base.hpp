/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:07:01 by tchantro          #+#    #+#             */
/*   Updated: 2023/10/25 16:40:48 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>

class	Base
{
	public:
		virtual	~Base(void);

		Base* 	generate(void);
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

#endif
