/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:30:50 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 12:35:09 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:
		HumanB(std::string const &name);
		~HumanB(void);

		void setWeapon(Weapon &weapon);
		void attack(void) const;
	
	private:
		std::string name;
		Weapon *weapon;
};

#endif