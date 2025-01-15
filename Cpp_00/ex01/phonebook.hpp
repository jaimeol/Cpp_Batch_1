/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:58:41 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 14:04:48 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contacts.hpp"
#include "utils.hpp"

class Phonebook
{
    private:
        Contact _contacts[8];
        int     _i;
    public:
        Phonebook(void);
        ~Phonebook(void);
        void    add(void);
        void    search(void);
        void    print(Contact contact);
        Contact get_contact(int i);
};

#endif