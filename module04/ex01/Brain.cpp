/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:33:53 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/24 23:47:22 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain's Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain's Destructor called" << std::endl;
}

Brain & Brain::operator=(Brain & breed)
{
      std::cout << "Brain's Assignation operator called" << std::endl;
    return *this;
}

Brain::Brain(Brain & copy) 
{
    std::cout << "Brain's Copy constructor called" << std::endl;
}

// void Brain::makeSound() const 
// {
//     std::cout << "Default Brain sound" << std::endl;
// }

// void Brain::setType(std::string type) 
// {
//     this->type = type;
// }
// std::string Brain::getType() const 
// {
//     return (this->type);
// }