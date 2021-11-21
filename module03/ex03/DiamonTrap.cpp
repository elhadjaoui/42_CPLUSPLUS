/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:29:18 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/20 19:33:38 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"

DiamonTrap::DiamonTrap()
{
    std::cout << "Anonymous Created from DiamonTrap" << std::endl;
    this->Name = "Anonymous";
    ClapTrap::Name = "Anonymous";
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energie_points = DiamonTrap::Energie_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamonTrap::DiamonTrap(std::string name) : FragTrap(name ), ScavTrap(name), ClapTrap(name)
{
    std::cout << name << " Created from  DiamonTrap" << std::endl;
     this->Name = name;
    ClapTrap::Name = name;
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energie_points = ScavTrap::Energie_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamonTrap& DiamonTrap::operator=(DiamonTrap &diamonTrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->Name = diamonTrap.Name;
    this->Attack_damage = diamonTrap.Attack_damage;
    this->Energie_points = diamonTrap.Energie_points;
    this->Hitpoints = diamonTrap.Hitpoints;
    return (diamonTrap);
}
DiamonTrap::DiamonTrap(DiamonTrap &diamonTrap)
{
    std::cout << "Copy constructor called" << std::endl;
      operator=(diamonTrap);

}

DiamonTrap::~DiamonTrap()
{
    std::cout << this->Name << " Destroyed from DiamonTrap" << std::endl;
}
void DiamonTrap::guardGate(void)
{
    std::cout << "DiamonTrap have enterred in Gate keeper mode." << std::endl;
}


void DiamonTrap::highFivesGuys(void)
{
    std::cout << "Welcome " << this->Name;
}

std::string DiamonTrap::getName()
{
    return (this->Name);
}
void DiamonTrap::setName(std::string name)
{
    this->Name = name;
}