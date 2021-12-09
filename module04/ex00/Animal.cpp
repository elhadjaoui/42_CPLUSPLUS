/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:23:46 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/05 11:13:40 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal's Constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal's Destructor called" << std::endl;
}

Animal & Animal::operator=(Animal & breed)
{
      std::cout << "Animal's Assignation operator called" << std::endl;
    this->type = breed.type;
    return *this;
}

Animal::Animal(Animal & copy) 
{
    std::cout << "Animal's Copy constructor called" << std::endl;
    this->type = copy.type;
}

void Animal::makeSound() const 
{
    std::cout << "Default animal sound" << std::endl;
}

void Animal::setType(std::string type) 
{
    this->type = type;
}
std::string Animal::getType() const 
{
    return (this->type);
}