/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:28:03 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 12:08:46 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Anonymous Created from FragTrap" << std::endl;
    this->name = "Anonymous";
    this->hitpoints = 100;
    this->energy = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << name << " Created from  FragTrap" << std::endl;

    this->name = name;
    this->hitpoints = 100;
    this->energy = 100;
    this->attack_damage = 30;
}

FragTrap& FragTrap::operator=(FragTrap &fragTrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = fragTrap.name;
    this->attack_damage = fragTrap.attack_damage;
    this->energy = fragTrap.energy;
    this->hitpoints = fragTrap.hitpoints;
    return (fragTrap);
}
FragTrap::FragTrap(FragTrap &fragTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(fragTrap);
}

FragTrap::~FragTrap()
{
    std::cout << this->name << " Destroyed from FragTrap" << std::endl;
}
void FragTrap::guardGate(void)
{
    std::cout << "FragTrap have enterred in Gate keeper mode." << std::endl;
}
void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << this->name << " attack " << target << ", causing  " << this->attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Welcome " << this->name;
}

std::string FragTrap::getName()
{
    return (this->name);
}
void FragTrap::setName(std::string name)
{
    this->name = name;
}