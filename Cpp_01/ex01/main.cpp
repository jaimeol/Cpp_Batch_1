/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:25:22 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/14 15:29:08 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie  *zombies;
	
	zombies = zombieHorde(7, "Baz");
	for (int i = 0; i < 7; ++i)
		zombies[i].announce();
	
	delete[] zombies;
	
	return 0;
}