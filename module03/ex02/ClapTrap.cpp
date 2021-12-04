/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:01:22 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 11:55:21 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Anonymous Created from ClapTrap" << std::endl;
    this->name = "Anonymous";
    this->hitpoints = 10;
    this->energy = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << name << " Created from ClapTrap" << std::endl;
    this->name = name;
    this->hitpoints = 10;
    this->energy = 10;
    this->attack_damage = 0;
}

ClapTrap& ClapTrap::operator=(ClapTrap &clapTrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = clapTrap.name;
    this->attack_damage = clapTrap.attack_damage;
    this->energy = clapTrap.energy;
    this->hitpoints = clapTrap.hitpoints;
    return (clapTrap);
}
ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(clapTrap) ;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->name << " attack " << target << ", causing  " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    amount = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    amount = 0;
}

std::string ClapTrap::getName()
{
    return (this->name);
}
void ClapTrap::setName(std::string name)
{
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " Destroyed from ClapTrap" << std::endl;
}
