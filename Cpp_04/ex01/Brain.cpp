/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:58:54 by jolivare          #+#    #+#             */
/*   Updated: 2024/10/23 11:22:19 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl; 
}

Brain &Brain::operator=(const Brain &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		if (src._ideas[i].length() > 0)
			this->_ideas[i].assign(src._ideas[i]);
	}
	std::cout << "Brain assignation operator called" << std::endl;
	return (*this);
}

const std::string Brain::getIdea(size_t i) const
{
	if (i < 100)
		return (this->_ideas[i]);
	else
		return ("There is only 100 ideas per brain");
}

const std::string *Brain::getIdeaAddress(size_t i)const
{
	if (i < 100)
	{
		const std::string &stringREF = this->_ideas[i];
		return (&stringREF);
	}
	else
		return (NULL);
}

void Brain::setIdea(size_t i, std::string idea)
{
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "There is only 100 ideas per brain" << std::endl; 
}
