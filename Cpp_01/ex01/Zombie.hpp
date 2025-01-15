/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:18:13 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/14 15:28:56 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);

		void setName(std::string const &name);
        void announce(void) const;
    
    private:
        std::string _name;
};

Zombie *zombieHorde(int N, std::string name);


#endif