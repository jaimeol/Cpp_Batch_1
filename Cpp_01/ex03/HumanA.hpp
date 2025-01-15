/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:17:32 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 13:06:17 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string const &name, Weapon const &weapon);
        ~HumanA(void);
        
        void attack(void) const;

    private:
        std::string name;
        Weapon const &weapon;
};

#endif