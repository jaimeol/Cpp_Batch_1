/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:25:00 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/08 16:43:30 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = -1;
    if (argc < 2)
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while  (argc > 1 && argv[++i])
	{
		j = -1;
		while (i > 0 && argv[i][++j])
			std::cout << (char)std::toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}