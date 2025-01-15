/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:45:48 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 19:08:52 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    Phonebook	ph1;
    std::string str;

	while (1)
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD" || str == "add")
			ph1.add();
		else if (str == "SEARCH" || str == "search")
			ph1.search();
		else if (str == "EXIT" || str == "exit")
			break ;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}