/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:10:34 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/10 18:11:00 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon()
{
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
   return (this->type);
}

void Weapon::setType(std::string type)
{
   this->type = type;
}
