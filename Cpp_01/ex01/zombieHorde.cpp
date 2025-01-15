/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:21:04 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/14 15:28:16 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies;
	
	zombies = new Zombie[N];
	
	for (int i = 0; i < N; ++i)
		zombies[i].setName(name);
	
	return zombies;
}