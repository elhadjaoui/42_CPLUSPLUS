/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:33:53 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/27 17:40:12 by mel-hadj         ###   ########.fr       */
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

Brain &Brain::operator=(Brain &breed)
{
    std::cout << "Brain's Assignation operator called" << std::endl;
  for (int i = 0; i < 100; i++)
  {
      this->ideas[i] = breed.ideas[i];
  }
  
    return *this;
}

Brain::Brain(Brain &copy)
{
    std::cout << "Brain's Copy constructor called" << std::endl;
    operator=(copy);
}
