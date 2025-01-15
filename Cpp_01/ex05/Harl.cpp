/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:23:37 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 17:58:48 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string const Harl::mood[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::complain(std::string level)
{
	static void (Harl::*log[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::size_t i;

	i = 0;
	while (i < 4 && mood[i] != level)
		++i;
	if (i == 4)
	{
		std::cout << "\033[0:37m";
		std::cout << "* Probably complaining about insignificant problems *";
		std::cout << "\033[0m" << std::endl;

		return;
	}
	return (this->*log[i])();
}

void Harl::debug(void)
{
	std::cout << "\033[0;36m";
	std::cout << "I love having extra onion rings for my 7XL-double-cheese-triple-pickle-special ketchup burger. ";
	std::cout << "I really do!";
	std::cout << "\033[0m" << std::endl;
	
	return ;
}

void Harl::info(void)
{
	std::cout << "\033[0;32m";
	std::cout << "I cannot believe adding extra onion rings costs more money. ";
	std::cout << "You didn't put enough onion rings in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!";
	std::cout << "\033[0m" << std::endl;

	return;
}

void Harl::warning(void)
{
	std::cout << "\033[1;33m";
	std::cout << "I think I deserve to have some extra onion rings for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month.";
	std::cout << "\033[0m" << std::endl;

	return;
}

void Harl::error(void)
{
	std::cout << "\033[1;31m";
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << "\033[0m" << std::endl;

	return;
}