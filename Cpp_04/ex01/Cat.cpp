/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:46:20 by jolivare          #+#    #+#             */
/*   Updated: 2024/12/02 16:59:56 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete(this->_brain);
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " says : **Meeeeoooowww**" << std::endl;
}

void	Cat::getIdea(void)const
{
	for (int i = 0; i < 99; i++)
	{
		if (!this->_brain->getIdea(i).empty())
			std::cout << "\tIdea " << i << " of the cat is: "  << this->_brain->getIdea(i) << "at the address " << this->_brain->getIdeaAddress(i) << std::endl;
	}
}

void Cat::setIdea(size_t i, std::string idea)
{
	if (i > 99)
	{
		std::cout << "\033[31mThere is only 100 ideas per brain\033[0m" << std::endl;
		return ;
	}
	this->_brain->setIdea(i, idea);
}
