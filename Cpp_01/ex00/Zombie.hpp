/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:36:40 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/14 15:20:33 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie(std::string const &name);
        ~Zombie(void);

        void announce(void);
    
    private:
        std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif