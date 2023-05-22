/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:13:57 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/22 12:32:55 by tchantro         ###   ########.fr       */
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
	
	void		first_step(void);
	std::string	get_first_name(void);	
	void		second_step(void);
	std::string	get_last_name(void);
	void		third_step(void);
	std::string	get_nickname(void);
	void		fourth_step(void);
	std::string	get_phone_number(void);
	void		fifth_step(void);
	std::string	get_secret(void);

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif
