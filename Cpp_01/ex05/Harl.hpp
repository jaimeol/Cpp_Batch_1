/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:19:18 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/16 15:36:22 by jolivare         ###   ########.fr       */
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
		
		void complain(std::string level);
	
	private:
		static const std::string mood[];
		
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif