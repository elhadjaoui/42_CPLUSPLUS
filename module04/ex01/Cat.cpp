/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:39:35 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/24 23:43:57 by mel-hadj         ###   ########.fr       */
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
    Brain *b = new Brain(*(breed.brain));
    delete this->brain;
    this->brain = b;
    return *this;
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat's Copy constructor called" << std::endl;
    this->type = "Cat";
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