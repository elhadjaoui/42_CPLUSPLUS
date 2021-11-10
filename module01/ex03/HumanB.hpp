/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:51:43 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/08 16:52:48 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_H
#define _HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
std::string name;
Weapon weapon;

public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();   
    void attack();
    void setWeapon(Weapon weapon); 
    Weapon getWeapon(); 
};

#endif