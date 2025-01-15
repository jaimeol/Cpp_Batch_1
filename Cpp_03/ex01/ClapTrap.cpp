/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:45:48 by jolivare          #+#    #+#             */
/*   Updated: 2024/10/22 11:49:25 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Paco"), _hit_points(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name): _name(name),  _hit_points(10), _energy(10), _damage(0)
{
	std::cout << "Claptrap constructor for " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor for " << _name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy = src._energy;
	this->_damage = src._damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_damage << " damage points!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << target << " because he has no energy left" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << target << " because he has not enough hit points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > amount)
		this->_hit_points -= amount;
	else if (this->_hit_points > 0)
		this->_hit_points = 0;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, stop beating him" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " was attacked and lost " << amount << " hit points, he now has " << this->_hit_points << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit_points > 0 && this->_hit_points + amount <= 10)
	{
		this->_hit_points += amount;
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << "repaired itself and gained " << this->_hit_points << " and now has " << this->_energy << "energy points left" << std::endl;
	}
	else if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " can't repair itself because he has no energy points left" << std::endl;
	else if (this->_hit_points == 0)
		std::cout << "ClapTrap " << this->_name << " can't repair itself because he has no hit points left" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " can't have more than 10 hit points" << std::endl;
}
