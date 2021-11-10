/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:21:28 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/08 16:37:07 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA()
{
    std::cout << this->name <<" died."<< std::endl;
}

void HumanA::attack()
{
  std::cout << this->name <<" attacks with his " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(std::string type)
{
    this->weapon.setType(type);
}
std::string HumanA::getWeapon()
{
    return (this->weapon.getType());
}
