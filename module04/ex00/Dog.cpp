/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:42 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/23 22:50:34 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog's Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog's Destructor called" << std::endl;
}

Dog & Dog::operator=(Dog & breed)
{
      std::cout << "Dog's Assignation operator called" << std::endl;
    this->type = breed.type;
    return *this;
}

Dog::Dog(Dog & copy)
{
    std::cout << "Dog's Copy constructor called" << std::endl;
   
}

void  Dog::makeSound()
{
    std::cout << "Dog Sound" << std::endl;
}
void Dog::setType(std::string type)
{
    this->type = type;
}
std::string Dog::getType()
{
    return (this->type);
}