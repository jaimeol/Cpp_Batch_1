/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:20:10 by jolivare          #+#    #+#             */
/*   Updated: 2024/10/22 11:44:54 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_gate_guardian = false;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->_gate_guardian = copy._gate_guardian;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap (std::string name): ClapTrap (name)
{
	this->_hit_points = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_gate_guardian = false;
	std::cout << "ScavTrap constructor for " << this->_name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor for " << this->_name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy = src._energy;
	this->_damage = src._damage;
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hit_points > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_damage << " damage points!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << " because he has no energy left" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << " because he has not enough hit points" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_gate_guardian == false)
	{
		this->_gate_guardian = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate" << std::endl;
}
