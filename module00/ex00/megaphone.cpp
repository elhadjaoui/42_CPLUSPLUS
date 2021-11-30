/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:02:12 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/29 23:09:26 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av)
{
    if (ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    for (int i = 1; i < ac; i++)
    {
        for (char *c = av[i]; *c != '\0'; c++)
        {
            std::cout << (char)toupper(*c);
        }
    }
  std::cout << std::endl;
    return 0;
}
