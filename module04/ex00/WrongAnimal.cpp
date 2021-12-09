/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:36:15 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/05 14:36:17 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal's Constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal's Destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal & breed)
{
      std::cout << "WrongAnimal's Assignation operator called" << std::endl;
    this->type = breed.type;
    return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal & copy) 
{
    std::cout << "WrongAnimal's Copy constructor called" << std::endl;
    this->type = copy.type;
}

void WrongAnimal::makeSound() const 
{
    std::cout << "Default WrongAnimal sound" << std::endl;
}

void WrongAnimal::setType(std::string type) 
{
    this->type = type;
}
std::string WrongAnimal::getType() const 
{
    return (this->type);
}