/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:26:22 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/21 01:58:36 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_H
#define _FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string);
    FragTrap(FragTrap &);
    FragTrap &operator=(FragTrap &);
    ~FragTrap();
    void guardGate();
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void highFivesGuys(void);
    std::string getName();
    void setName(std::string);
};

#endif 