/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 03:34:53 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 11:56:36 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Anonymous Created from ScavTrap" << std::endl;
    this->name = "Anonymous";
    this->hitpoints = 100;
    this->energy = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << name << " Created from  ScavTrap" << std::endl;

    this->name = name;
    this->hitpoints = 100;
    this->energy = 50;
    this->attack_damage = 20;
}

ScavTrap &ScavTrap::operator=(ScavTrap &scavTrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = scavTrap.name;
    this->attack_damage = scavTrap.attack_damage;
    this->energy = scavTrap.energy;
    this->hitpoints = scavTrap.hitpoints;
    return (scavTrap);
}
ScavTrap::ScavTrap(ScavTrap &scavTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(scavTrap);
}

ScavTrap::~ScavTrap()
{
    std::cout << this->name << " Destroyed from ScavTrap" << std::endl;
}
void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing  " << this->attack_damage << " points of damage!" << std::endl;
}

std::string ScavTrap::getName()
{
    return (this->name);
}
void ScavTrap::setName(std::string name)
{
    this->name = name;
}