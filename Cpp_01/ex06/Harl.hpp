/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:36:33 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 15:37:22 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		
		void complain(std::string const &level) const;
	
	private:
		static const std::string mood[];
		
		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;
};

#endif