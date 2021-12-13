/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:52:59 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/13 23:01:34 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{
  this->myInt = 0;
  this->myChar = 0;
  this->myDouble = 0;
  this->myFloat = 0;
  this->check = "OK";
}

Conversion::~Conversion()
{
}

Conversion &Conversion::operator=(Conversion &conversion)
{
  this->myInt = conversion.myInt;
  this->myChar = conversion.myChar;
  this->myDouble = conversion.myDouble;
  this->myFloat = conversion.myFloat;
  return (*this);
}

Conversion::Conversion(Conversion &Conversion)
{
  operator=(Conversion);
}

void Conversion::convert(std::string str)
{
  char *mystr;
  mystr = &str[0];
  stringstream abc;
  int d;
  abc << str;
  abc >> static_cast<double>(d);
  
  std::cout << static_cast<double>(d) << std::endl;

  if (str.find('.') != std::string::npos)
  {
    // std::cout << str[str.length() - 1];
    if (str[str.length() - 1] == 'f' )
    {
        if (str.compare("-inff"))
        {
        
        }
        if (str.compare("+inff"))
        {
          
        }
        if (str.compare("nanf"))
        {
          
        }
      this->myFloat = atof(mystr);
  }
    else
      this->myDouble = atof(mystr);

}
