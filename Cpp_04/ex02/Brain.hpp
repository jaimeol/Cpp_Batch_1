/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:58:59 by jolivare          #+#    #+#             */
/*   Updated: 2024/10/23 10:47:21 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		
		virtual ~Brain();
		Brain &operator=(const Brain &src);
		
		const std::string getIdea(size_t i)const;
		const std::string *getIdeaAddress(size_t i)const;
		 
		void setIdea(size_t i, std::string idea);
};