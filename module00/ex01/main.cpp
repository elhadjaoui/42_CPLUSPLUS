/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:02:47 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/21 03:41:28 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int add(PhoneBook *phonebook, Contact contact)
{
  std::string str;

  std::cout << "Please Enter the contact informations :\n";
  //-------------------------------------------------------------
  std::cout << "First Name : ";
  std::getline(std::cin, str);
  if (std::cin.eof())
    return (1);
  while (1)
  {
    if (str.length() != 0)
    {
      contact.SetFirstName(str);
      break;
    }
    else
    {
      std::cout << "First Name : ";
      std::getline(std::cin, str);
    }
  }
  //--------------------------------------------------------------
  str.clear();
  std::cout << "Last Name : ";
  std::getline(std::cin, str);
  if (std::cin.eof())
    return (1);
  while (1)
  {
    if (str.length() != 0)
    {
      contact.SetLastName(str);
      break;
    }
    else
    {
      std::cout << "Last Name : ";
      std::getline(std::cin, str);
    }
  }
  //-------------------------------------------------------------------
  str.clear();
  std::cout << "Nick Name : ";
  std::getline(std::cin, str);
  if (std::cin.eof())
    return (1);
  while (1)
  {
    if (str.length() != 0)
    {
      contact.SetNickName(str);
      break;
    }
    else
    {
      std::cout << "Nick Name : ";
      std::getline(std::cin, str);
    }
  }
  //------------------------------------------------------------------------
  str.clear();
  std::cout << "Phone Number : ";
  std::getline(std::cin, str);
  if (std::cin.eof())
    return (1);
  while (1)
  {
    if (str.length() != 0)
    {
      contact.SetPhoneNumber(str);
      break;
    }
    else
    {
      std::cout << "Phone Number : ";
      std::getline(std::cin, str);
    }
  }
  //------------------------------------------------------------------------
  std::cout << "Darkest Secret : ";
  std::getline(std::cin, str);
  if (std::cin.eof())
    return (1);

  while (1)
  {
    if (str.length() != 0)
    {
      contact.SetDarkestSecret(str);
      break;
    }
    else
    {
      std::cout << "Darkest Secret : ";
      std::getline(std::cin, str);
    }
  }
  contact.SetIndex(phonebook->ret_index());
  phonebook->add_contact(contact);
  return (0);
}

std::string truncate(std::string str)
{
  std::string txt;
  
  if (str.length() > 9)
  {
    txt = str.substr(0, 9);    
    txt.push_back('.');
  return (txt);
  }
  return (str);
}

void search(PhoneBook *phonebook)
{
  Contact *cn;
  Contact cntact;
  std::string str;

  cn = phonebook->GetContacts();
  std::cout << "The list of available contacts :" << std::endl
            << std::endl;
  for (int i = 0; i < 8; i++)
  {
    if (cn[i].GetFirstName().empty())
        continue;
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << cn[i].GetIndex();
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << truncate(cn[i].GetFirstName()) ;
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << truncate(cn[i].GetLastName());
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << truncate(cn[i].GetNickName());
    std::cout << "|";
    std::cout << std::endl << std::endl;
  }
   std::cout << "Enter an index of the contact you want to see." << std::endl;
   std::cout << "==>";
   std::getline(std::cin, str);
  if (std::cin.eof())
      return ;
  for (int i = 0; i < str.length(); i++)
  {
    if (!std::isdigit(str[i]))
    {
        std::cout << "Please Enter a valid index.\n" << std::endl;
        return ;
    }
  }
  cntact =  phonebook->GetOneContact(std::stoi(str));
  if (!cntact.GetFirstName().empty())
  {
    std::cout << "|" << cntact.GetIndex() << "|" << std::endl  ;
    std::cout << "|" << truncate(cntact.GetFirstName()) << "|"  << std::endl;
    std::cout << "|" << truncate(cntact.GetLastName()) << "|" << std::endl;
    std::cout << "|" << truncate(cntact.GetNickName()) << "|" << std::endl;
    std::cout << "|" << truncate(cntact.GetPhoneNumber()) << "|" << std::endl;
    std::cout << "|" << truncate(cntact.GetDarkestSecret()) << "|" << std::endl;
    std::cout << std::endl;
  }
  else  
      std::cout << "Please Enter a valid index.\n" << std::endl;
}
int check_wich_cmd()
{
  PhoneBook phonebook;
  Contact contact;
  std::string name;

  while (1)
  {
    std::cout << "Please, Enter One of the following command :\n1)ADD\n2)SEARCH\n3)EXIT\n";
    std::cout << "==>";
    std::getline(std::cin, name);
    if (std::cin.eof())
      return 0;
    if (name.compare("ADD") == 0)
    {
      if (add(&phonebook, contact))
        return (0);
    }
    else if (name.compare("EXIT") == 0)
      return (0);
    else if (name.compare("SEARCH") == 0)
    {
      search(&phonebook);
    }
  }
  return (1);
}

int main()
{
  check_wich_cmd();
  return 0;
}