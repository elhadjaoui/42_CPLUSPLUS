/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:39:35 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/27 17:47:55 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H
#define _CAT_H


#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat's Constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat's Destructor called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(Cat &breed)
{
    std::cout << "Cat's Assignation operator called" << std::endl;
    delete this->brain;
    this->brain = new Brain(*(breed.brain));
    return *this;
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat's Copy constructor called" << std::endl;
    this->brain = new Brain(*(copy.brain));
}


void Cat::makeSound() const
{
    std::cout << "Cat Sound" << std::endl;
}
void Cat::setType(std::string type)
{
    this->type = type;
}
std::string Cat::getType() const 
{
    return (this->type);
}

Brain * Cat::getBrain()
{
    return this->brain;
}

#endif