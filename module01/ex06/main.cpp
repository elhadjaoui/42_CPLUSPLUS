/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:16:27 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/14 18:44:10 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Karen karen;
        karen.complain(argv[1]);
        return (0);
    }
    std::cout << "Error\nInvalid Arguments" << std::endl;
    return (1);
   
}
