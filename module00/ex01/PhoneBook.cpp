/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:59:25 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/06 15:59:31 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

void PhoneBook::add_contact(Contact contact)
{
    if (this->index < 8)
    {
        contacts[this->index] = contact;
        this->index++;
    }
    else
    {
        this->index = 0;
        contact.SetIndex(0);
        contacts[this->index] = contact;
        this->index++;
    }
}
int PhoneBook::ret_index()
{
    return (this->index);
}

Contact PhoneBook::GetOneContact(int i)
{
    Contact cnt;

    if (i > this->index || i < 0)
    {
        std::cout << "no contact found with this index\n";
        return (cnt);
    }
    else
        return this->contacts[i];
}

void PhoneBook::search()
{
}
void PhoneBook::exit_now()
{
}
Contact *PhoneBook::GetContacts()
{
    return this->contacts;
}