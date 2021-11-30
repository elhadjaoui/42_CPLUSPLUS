/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:42 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/27 20:27:13 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog's Constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog's Destructor called" << std::endl;
    delete this->brain;
}

Dog & Dog::operator=(Dog & breed)
{
    std::cout << "Dog's Assignation operator called" << std::endl;
    delete this->brain;
    this->brain = new Brain(*(breed.brain));
    return *this;
}

Dog::Dog(Dog & copy)
{
    std::cout << "Dog's Copy constructor called" << std::endl;
     this->brain = new Brain(*(copy.brain));
}

void  Dog::makeSound() const
{
    std::cout << "Dog Sound" << std::endl;
}
void Dog::setType(std::string type)
{
    this->type = type;
}
std::string Dog::getType() const
{
    return (this->type);
}

Brain * Dog::getBrain()
{
    return this->brain;
}