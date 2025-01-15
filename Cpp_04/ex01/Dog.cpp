/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:52:01 by jolivare          #+#    #+#             */
/*   Updated: 2024/12/02 16:56:39 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete(this->_brain);
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " says : **Guau Guau**" << std::endl;
}

void	Dog::getIdea(void)const
{
	for (int i = 0; i < 100; i++)
	{
		if (!this->_brain->getIdea(i).empty())
			std::cout << "\tIdea " << i << " of the Dog is: "  << this->_brain->getIdea(i) << " at the address " << this->_brain->getIdeaAddress(i) << std::endl;
	}
}

void Dog::setIdea(size_t i, std::string idea)
{
	if (i > 99)
	{
		std::cout << "\033[31mThere is only 100 ideas per brain\033[0m" << std::endl;
		return ;
	}
	this->_brain->setIdea(i, idea);
}
