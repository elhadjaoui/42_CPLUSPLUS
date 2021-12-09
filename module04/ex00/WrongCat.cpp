/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:49:43 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/05 14:50:18 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _WRONGCAT_H
#define _WRONGCAT_H


#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat's Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat's Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &breed)
{
    std::cout << "WrongCat's Assignation operator called" << std::endl;
    this->type = breed.type;
    return *this;
}

WrongCat::WrongCat(WrongCat &copy)
{
    std::cout << "WrongCat's Copy constructor called" << std::endl;
    this->type = copy.type;
    
}


void WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound" << std::endl;
}
void WrongCat::setType(std::string type)
{
    this->type = type;
}
std::string WrongCat::getType()
{
    return (this->type);
}

#endif