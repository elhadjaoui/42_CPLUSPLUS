/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:16:45 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/10 22:46:32 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_H
#define _HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
std::string name;
Weapon& weapon;

public:
    HumanA(std::string name, Weapon &new_weapon);
    void attack();
};

#endif