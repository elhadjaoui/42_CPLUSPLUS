/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:16:45 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/08 16:16:35 by mel-hadj         ###   ########.fr       */
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
Weapon weapon;

public:
    HumanA();
    HumanA(std::string name, Weapon weapon);
    ~HumanA();   
    void attack();
    void setWeapon(std::string type); 
    std::string getWeapon(); 
};

#endif