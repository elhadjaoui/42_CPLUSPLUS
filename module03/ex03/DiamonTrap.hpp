/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:30:07 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/20 19:39:53 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONTRAP_H
#define _DIAMONTRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamonTrap : public ScavTrap , public FragTrap
{
public:
    DiamonTrap();
    DiamonTrap(std::string name);
    DiamonTrap(DiamonTrap &);
    DiamonTrap &operator=(DiamonTrap &);
    ~DiamonTrap();
    void guardGate();
    using ScavTrap::attack;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void highFivesGuys(void);
    std::string getName();
    void setName(std::string);
private :
    std::string Name;
};

#endif 