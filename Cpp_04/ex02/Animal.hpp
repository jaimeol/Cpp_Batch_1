/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:29:30 by jolivare          #+#    #+#             */
/*   Updated: 2024/10/23 12:25:15 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>

class Animal
{
	protected:
		std::string _type;
		Animal();
	public:
		Animal (const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &src);	
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};