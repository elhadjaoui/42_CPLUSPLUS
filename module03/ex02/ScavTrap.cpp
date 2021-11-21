/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 03:34:53 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/21 03:32:45 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout <<  "Anonymous Created from ScavTrap" << std::endl;
    this->Name = "Anonymous";
    this->Hitpoints = 100;
    this->Energie_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout <<  name << " Created from  ScavTrap" << std::endl;
    
    this->Name = name;
    this->Hitpoints = 100;
    this->Energie_points = 50;
    this->Attack_damage = 20;
}

ScavTrap& ScavTrap::operator=(ScavTrap &scavTrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->Name = scavTrap.Name;
    this->Attack_damage = scavTrap.Attack_damage;
    this->Energie_points = scavTrap.Energie_points;
    this->Hitpoints = scavTrap.Hitpoints;
    return (scavTrap);
}
ScavTrap::ScavTrap(ScavTrap &scavTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(scavTrap); 
}

ScavTrap::~ScavTrap()
{
    std::cout << this->Name << " Destroyed from ScavTrap" << std::endl;
}
void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->Name  << " attack "<<  target << ", causing  " << this->Attack_damage << " points of damage!" << std::endl;
}

    std::string ScavTrap::getName()
    {
        return (this->Name);
    }
    void ScavTrap::setName(std::string name)
    {
        this->Name = name;
    }