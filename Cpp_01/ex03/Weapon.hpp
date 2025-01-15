/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:42:24 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 12:46:22 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
    public:
        Weapon(std::string const &type);
        ~Weapon(void);
        
        std::string const &getType(void) const;
        void setType(std::string const &type);
    
    private:
        std::string type;
};

#endif