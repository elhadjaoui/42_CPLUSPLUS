/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:02:12 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/10/27 18:34:51 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av)
{
    if (ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (1);
    }
    for (int i = 1; i < ac; i++)
    {
        for (char *c = av[i]; *c != '\0'; c++)
        {
            std::cout << (char)toupper(*c);
        }
        if ( i != ac - 1)
            std::cout << " ";
    }

    return 0;
}
