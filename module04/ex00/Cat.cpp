/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:39:35 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/05 11:14:02 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H
#define _CAT_H


#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat's Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat's Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat &breed)
{
    std::cout << "Cat's Assignation operator called" << std::endl;
    this->type = breed.type;
    return *this;
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat's Copy constructor called" << std::endl;
    this->type = copy.type;
    
}


void Cat::makeSound() const
{
    std::cout << "Cat Sound" << std::endl;
}
void Cat::setType(std::string type)
{
    this->type = type;
}
std::string Cat::getType()
{
    return (this->type);
}

#endif