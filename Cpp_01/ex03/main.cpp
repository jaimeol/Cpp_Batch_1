/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:56:06 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 13:05:19 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob ("Bob", club);
        
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");
        Weapon club2 = Weapon("special spiked club");
        HumanB jim ("Jim");
        
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
        jim.setWeapon(club2);
        jim.attack();
        club2.setType("some other special type of club");
		jim.attack();
    }
	return 0;
}