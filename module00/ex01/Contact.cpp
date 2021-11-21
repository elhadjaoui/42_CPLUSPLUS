/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:11:51 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/21 03:41:19 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Setters definition

void Contact::SetFirstName(std::string str)
{
    first_name = str;
}
void Contact::SetLastName(std::string str)
{
    last_name = str;
}
void Contact::SetNickName(std::string str)
{
    nick_name = str;
}
void Contact::SetPhoneNumber(std::string str)
{
    phone_number = str;
}
void Contact::SetDarkestSecret(std::string str)
{
    darkest_secret = str;
}

void Contact::SetIndex(int index)
{
  this->index = index;
}



// getters definition
std::string Contact::GetFirstName()
{
    return this->first_name;
}

std::string Contact::GetLastName()
{
    return this->last_name;
}

std::string Contact::GetNickName()
{
    return this->nick_name;
}

std::string Contact::GetPhoneNumber()
{
    return this->phone_number;
}

std::string Contact::GetDarkestSecret()
{
    return this->darkest_secret;
}

int Contact::GetIndex()
{
    return (index);
}



