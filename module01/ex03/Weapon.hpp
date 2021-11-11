/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:02:33 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/10 23:03:55 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H
#define _WEAPON_H

#include <iostream>
#include <string>


class Weapon
{

std::string type;
public:
    Weapon();
    Weapon(std::string type);
    void setType(std::string type);
    const std::string getType();
};


#endif