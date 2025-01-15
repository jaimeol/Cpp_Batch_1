/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:29:16 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 13:07:36 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : name(name), weapon (NULL)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return;
}

void HumanB::attack(void) const
{
	std::cout << this->name << " attacks with its ";
	if (this->weapon != NULL)
		std::cout << this->weapon->getType();
	else
		std::cout << "bare hands";
	std::cout << std::endl;
	return;
}
