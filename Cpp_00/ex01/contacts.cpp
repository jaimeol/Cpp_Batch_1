/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:19:13 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 13:41:42 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_name(void) const
{
    return (this->_name);
}

std::string Contact::get_surname(void) const
{
    return (this->_surname);
}

std::string Contact::get_nick(void) const
{
    return (this->_nick);
}

std::string Contact::get_number(void) const
{
    return (this->_number);
}

std::string Contact::get_secret(void) const
{
    return (this->_secret);
}

void    Contact::set_name(std::string str)
{
    this->_name = str;
}

void    Contact::set_surname(std::string str)
{
    this->_surname = str;
}

void    Contact::set_nick(std::string str)
{
    this->_nick = str;
}

void    Contact::set_number(std::string str)
{
    this->_number = str;
}

void    Contact::set_secret(std::string str)
{
    this->_secret = str;
}


