/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:20:15 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 13:38:57 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <string>

class Contact
{
    private:
        std::string	_name;
		std::string	_surname;
		std::string _nick;
		std::string _number;
		std::string _secret;
	
	public:
		Contact(void);
		~Contact(void);

		std::string	get_name(void) const;
		std::string get_surname(void) const;
		std::string get_nick(void) const;
		std::string get_number(void) const;
		std::string get_secret(void) const;
		void	set_name(std::string str);
		void	set_surname(std::string str);
		void	set_nick(std::string str);
		void	set_number(std::string str);
		void	set_secret(std::string str);
};

#endif