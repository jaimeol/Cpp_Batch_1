/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:45:34 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 12:48:27 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : type(type)
{
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string const &Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(std::string const &type)
{
    this->type = type;
    return;
}
