/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 11:56:47 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 13:52:34 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	add_spaces(int n)
{
	std::string	str;
	
	while (n--)
		str.append(" ");
	return (str);
}

std::string	fix_format(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

int	search_ui(Contact contacts[8])
{
	char		c;
	int			i;
	std::string str;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	c = '0';
	i = 0;
	while (++c <= '8')
	{
		if (contacts[c - 1 - '0'].get_name().size() && ++i)
		{
			str = c;
			str = fix_format(str, 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_format(contacts[c - 1 - '0'].get_name(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_format(contacts[c - 1 - '0'].get_surname(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_format(contacts[c - 1 - '0'].get_nick(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (i);
}
