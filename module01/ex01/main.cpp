/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:33 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/01 03:59:34 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

    Zombie *zo;

    zo = zombieHorde(5, "Horde1");
    for (int i = 0; i < 5; i++)
    {
        zo->announce();
    }
    
    delete[] zo;
    
    return 0;
}