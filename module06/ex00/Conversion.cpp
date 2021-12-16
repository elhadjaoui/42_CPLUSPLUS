/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:52:59 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/16 19:56:26 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{
  this->myInt = 0;
  this->myChar = 0;
  this->myDouble = 0;
  this->myFloat = 0;
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

bool check_for_science_keyword(std::string str)
{
  if (str == "-inff"|| str == "+inff" || str ==  "nanf" || str == "-inf" || str == "+inf"  || str == "nan")
    return true;
  return false;
}

void Conversion::convert(std::string str)
{
  char *mystr;
  mystr = &str[0];
if (check_for_science_keyword(str))
{
  this->print(mystr);
}
else
{
  if (str.find('.') != std::string::npos)
    this->print(atof(mystr));
  else
    this->print(atoi(mystr));
}
}

void Conversion::print(int num)
{
  std::cout << "char: ";
  if (isprint(num))
    std::cout << static_cast<char>(num) << std::endl;
  else if (num < 0)
     std::cout << "impossible" << std::endl;
  else
    std::cout << "Non displayable" << std::endl;
  std::cout << "int: ";
  std::cout << num << std::endl;
  std::cout << "float: ";
  std::cout << static_cast<float>(num) << ".0"
            << "f" << std::endl;
  std::cout << "double: ";
  std::cout << static_cast<double>(num) << ".0" << std::endl;
}

void Conversion::print(double num)
{
  std::cout << "char: ";
  if (isprint(num))
    std::cout << static_cast<char>(num) << std::endl;
  else if (num < 0)
     std::cout << "impossible" << std::endl;
  else
    std::cout << "Non displayable" << std::endl;
  std::cout << "int: ";
  std::cout << static_cast<int>(num) << std::endl;
  std::cout << "float: ";
   std::cout << std::fixed <<  std::setprecision(1) << static_cast<float>(num)  << std::endl;
  std::cout << "double: ";
  std::cout << num << std::endl;
}

void Conversion::print(char * mystr)
{
  std::cout << "char: ";
  std::cout << "impossible" << std::endl;
  std::cout << "int: ";
  std::cout << "impossible" << std::endl;
  std::cout << "float: ";
  std::cout << static_cast<float>(atof(mystr)) << "f" << std::endl;
  std::cout << "double: ";
  std::cout << static_cast<double>(atof(mystr))<< std::endl;
}

