/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:18:30 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/07 10:05:33 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void randomChump( std::string name)
{
    Zombie zombie;
    zombie.setName(name);
    zombie.announce();
}