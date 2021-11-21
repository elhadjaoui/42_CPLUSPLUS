/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:24:37 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/15 23:24:31 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip> 
#include "Contact.hpp"

class PhoneBook
{
    Contact contacts[8];
    int index;

    public:
        PhoneBook();
        void add_contact(Contact contact);
        void exit_now();
        void search();
        Contact *GetContacts();
        Contact GetOneContact(int i);
        int ret_index();
};

#endif