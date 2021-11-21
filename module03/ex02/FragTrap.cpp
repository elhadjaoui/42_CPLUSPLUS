/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:28:03 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/21 03:33:01 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Anonymous Created from FragTrap" << std::endl;
    this->Name = "Anonymous";
    this->Hitpoints = 100;
    this->Energie_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << name << " Created from  FragTrap" << std::endl;

    this->Name = name;
    this->Hitpoints = 100;
    this->Energie_points = 100;
    this->Attack_damage = 30;
}

FragTrap& FragTrap::operator=(FragTrap &fragTrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->Name = fragTrap.Name;
    this->Attack_damage = fragTrap.Attack_damage;
    this->Energie_points = fragTrap.Energie_points;
    this->Hitpoints = fragTrap.Hitpoints;
    return (fragTrap);
}
FragTrap::FragTrap(FragTrap &fragTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(fragTrap);
}
FragTrap::~FragTrap()
{
    std::cout << this->Name << " Destroyed from FragTrap" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << this->Name << " attack " << target << ", causing  " << this->Attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Welcome " << this->Name;
}

std::string FragTrap::getName()
{
    return (this->Name);
}
void FragTrap::setName(std::string name)
{
    this->Name = name;
}