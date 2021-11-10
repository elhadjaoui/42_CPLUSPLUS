/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:50:47 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/08 16:52:09 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    std::cout << this->name <<" died."<< std::endl;
}

void HumanB::attack()
{
  std::cout << this->name <<" attacks with his " << this->weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}
Weapon HumanB::getWeapon()
{
    return (this->weapon);
}
