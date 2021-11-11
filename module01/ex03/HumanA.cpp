/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:21:28 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/10 22:46:29 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon):weapon(weapon)
{
    this->name = name;
}

void HumanA::attack()
{
  std::cout << this->name <<" attacks with his " << this->weapon.getType() << std::endl;
}

