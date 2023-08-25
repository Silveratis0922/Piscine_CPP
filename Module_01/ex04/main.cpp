/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:46:33 by tchantro          #+#    #+#             */
/*   Updated: 2023/08/24 16:35:51 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	filename(argv[1]);
		std::string	find(argv[2]);
		std::string	remplace(argv[3]);

		std::ifstream file(filename.c_str());
		if (file)
		{
			std::string	remplace_file = filename + ".remplace";
			std::string	buf;
			char					c;
			unsigned long int		i = 0;

			std::ofstream	file2(remplace_file.c_str());
			while (file.get(c))
			{
				if (c == find[i])
				{
					buf += c;
					i++;
					if (i == find.length())
					{
						file2 << remplace;
						buf.clear();
						i = 0;
					}
				}
				else if (i != 0)
				{
					buf += c;
					file2 << buf;
					buf.clear();
					i = 0;
				}
				else
					file2 << c;
			}
			file.close();
			file2.close();
		}
		else
			std::cerr << "No filename" << std::endl;
	}
	else
		std::cerr << "Wrong amount of arguments." << std::endl;
	return (0);
}
