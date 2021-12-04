/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:41:43 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 12:31:17 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamonTrap.hpp"

int main(void)
{
    DiamonTrap obj("gold");

  obj.attack("jjj");
  obj.highFivesGuys();
  obj.guardGate();
  obj.whoAmI();
  
  DiamonTrap obj1;
  obj1.whoAmI();
}