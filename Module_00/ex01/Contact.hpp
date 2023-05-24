/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:13:57 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/24 14:30:12 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
public:

	Contact(void);
	~Contact(void);
	
	int		first_step(void);
	std::string	get_first_name(void);	
	int		second_step(void);
	std::string	get_last_name(void);
	int		third_step(void);
	std::string	get_nickname(void);
	int		fourth_step(void);
	std::string	get_phone_number(void);
	int		fifth_step(void);
	std::string	get_secret(void);

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif
