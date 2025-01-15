/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:31:19 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 13:07:29 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon const &weapon) : name(name), weapon(weapon)
{
    return;
}

HumanA::~HumanA(void)
{
    return;
}

void HumanA::attack(void) const
{
    std::cout << this->name << " attacks with its ";
    std::cout << this->weapon.getType() << std::endl;

    return;
}
