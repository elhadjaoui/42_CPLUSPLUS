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
    this->Name = "Anonymous";
    ClapTrap::name = "Anonymous_clap_name";
    this->hitpoints = FragTrap::hitpoints;
    this->energy = DiamonTrap::energy;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << "Anonymous Created from DiamonTrap" << std::endl;
}

DiamonTrap::DiamonTrap(std::string name) : ClapTrap(name) , ScavTrap(name), FragTrap(name )
{
    this->Name = name;
    ClapTrap::name = name + "_clap_name";
    this->hitpoints = FragTrap::hitpoints;
    this->energy = ScavTrap::energy;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << name << " Created from  DiamonTrap" << std::endl;
}

DiamonTrap& DiamonTrap::operator=(DiamonTrap &diamonTrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->Name = diamonTrap.Name;
    this->attack_damage = diamonTrap.attack_damage;
    this->energy = diamonTrap.energy;
    this->hitpoints = diamonTrap.hitpoints;
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

 void DiamonTrap::whoAmI()
 {
     std::cout << "DiamonTrap Name : " << this->Name << " ClapTrap Name : " << ClapTrap::name << std::endl;
 }

std::string DiamonTrap::getName()
{
    return (this->Name);
}
void DiamonTrap::setName(std::string name)
{
    this->Name = name;
}