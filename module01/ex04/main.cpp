/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:48:44 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/11 00:45:12 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, const char **argv)
{
    if (argc == 4)
    {
        std::ofstream myfile(argv[1]);
        if (myfile.is_open())
        {     
            myfile << "This is a line.\n";
            myfile << "This is another line.\n";
            myfile.close();
        }
        else
            std::cout << "Unable to open file";
    }
    else 
        std::cout << "ERROR\nMore or Few Arguments" << std::endl;
    return 0;
}
