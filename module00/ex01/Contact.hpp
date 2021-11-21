/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:24:46 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/15 23:23:17 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_H
#define _CONTACT_H

#include <iostream>
#include <string>




class Contact
{
    int index;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
    
    public:
        //setters
        void SetFirstName(std::string first_name);
        void SetLastName(std::string last_name);
        void SetNickName(std::string nick_name);
        void SetPhoneNumber(std::string phone_number);
        void SetDarkestSecret(std::string darkest_secret);
        void SetIndex(int index);

        //getters
        std::string GetFirstName();
        std::string GetLastName();
        std::string GetNickName();
        std::string GetPhoneNumber();
        std::string GetDarkestSecret();
        int GetIndex();
};

#endif