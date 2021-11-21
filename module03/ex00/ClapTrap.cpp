/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:01:22 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/21 03:17:06 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout <<  "Anonymous Created" << std::endl;
    this->Name = "Anonymous";
    this->Hitpoints = 10;
     this->Energie_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
     std::cout <<  name << " Created" << std::endl;
    this->Name = name;
    this->Hitpoints = 10;
     this->Energie_points = 10;
    this->Attack_damage = 0;
}

ClapTrap& ClapTrap::operator=(ClapTrap &clapTrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->Name = clapTrap.Name;
    this->Attack_damage = clapTrap.Attack_damage;
    this->Energie_points = clapTrap.Energie_points;
    this->Hitpoints = clapTrap.Hitpoints;
    return (clapTrap);
}
ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(clapTrap) ;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->Name  << " attack "<<  target << ", causing  " << this->Attack_damage << " points of damage!" << std::endl;
}

void  ClapTrap::takeDamage(unsigned int amount)
{
    amount = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    amount = 0;
}

std::string ClapTrap::getName()
{
    return (this->Name);
}
void ClapTrap::setName(std::string name)
{
    this->Name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->Name << " Destroyed" << std::endl;
}