/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 23:45:43 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 11:16:00 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_H
#define _CLAPTRAP_H

#include <iostream>


class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(ClapTrap &);
    ClapTrap(std::string);
    ClapTrap &operator=(ClapTrap &) ;
    ~ClapTrap();
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName();
    void setName(std::string);
private:
    std::string name;
    int hitpoints;
    int attack_damage;
    int energy;

};

#endif // !_CLAPTRAP_H