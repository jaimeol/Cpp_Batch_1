/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:58:34 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 14:56:06 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->_i = 0;
    std::cout << "Welcome to Phonebook! Phonebook created for a maximum of 8 contacts" << std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Bye! 👋" << std::endl;
}

void Phonebook::add(void)
{
    std::string	str;
	str = "";

	if (this->_i > 7)
		std::cout << "Warning: you are overwriting info about " << this->_contacts[this->_i % 8].get_name() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_i % 8].set_name(str);
	}
	str = "";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contacts[this->_i % 8].get_name() << "'s surname: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_i % 8].set_surname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contacts[this->_i % 8].get_name() << "'s nick: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_i % 8].set_nick(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout<< "Enter " << this->_contacts[this->_i % 8].get_name() << "'s number: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_i % 8].set_number(str);
	}
	str = "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<< "Enter " << this->_contacts[this->_i % 8].get_name() << "'s deepest secret: ";
		if (std::getline(std::cin, str) && str != "")
		{
			this->_contacts[this->_i % 8].set_secret(str);
			std::cout << this->_contacts[this->_i % 8].get_name() << " succesfully added to Phonebook [" << this->_i % 8 + 1 << "/8]" << std::endl;
		}
	}
	this->_i++;
}

void	Phonebook::print(Contact contact)
{
	std::cout << std::endl << "Requesting contact information..." << std::endl;
	if (!contact.get_name().size())
	{
		std::cout << "Failed to get contact information" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_name() << std::endl;
	std::cout << "Surname: " << contact.get_surname() << std::endl;
	std::cout << "Nickname: " << contact.get_nick() << std::endl;
	std::cout << "Number: " << contact.get_number() << std::endl;
	std::cout << "Deepest Secret: " << contact.get_secret() << std::endl;
}

Contact Phonebook::get_contact(int i)
{
	return (this->_contacts[i % 8]);
}

void	Phonebook::search(void)
{
	std::string	str;
	if (!search_ui(this->_contacts))
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Selet an index ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && this->_contacts[str[0] - 1 - '0'].get_name().size())
				break ;
		}
		if (str != "")
			std::cout << "Invalid index" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->_contacts[str[0] - 1 - '0']);
}
