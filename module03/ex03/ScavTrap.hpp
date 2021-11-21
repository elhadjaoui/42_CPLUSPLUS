/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 02:08:31 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/21 01:59:19 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _SCAVTRAP_H
#define _SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(ScavTrap &);
    ScavTrap &operator=(ScavTrap &);
    ~ScavTrap();
    void guardGate();
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName();
    void setName(std::string);
};

#endif 