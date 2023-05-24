/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:10:36 by tchantro          #+#    #+#             */
/*   Updated: 2023/05/24 14:37:24 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class	PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	void	print_first_name(int j);
	void	print_last_name(int j);
	void	print_nickname(int j);
	int		print_index_info(void);
	void	search(void);
	int		add_info(int i);
	void	print_info(int i);

private:

	Contact	tab[8];
};

#endif
