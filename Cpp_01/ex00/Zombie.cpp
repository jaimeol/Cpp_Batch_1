/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:36:12 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/14 15:12:44 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const &name) : _name(name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie \"" << this->_name;
	std::cout << "\" has been destroyed !" << std::endl;

	return ;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}