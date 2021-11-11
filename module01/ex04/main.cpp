/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:48:44 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/11 20:02:12 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, const char **argv)
{
    if (argc == 4)
    {
        std::string line;
        std::ifstream myfile(argv[1]);
        std::string output_file = argv[1];
        output_file = output_file.append(".replace");
        std::string s2 = argv[3];
        std::string s1 = argv[2];

        if (myfile.is_open())
        {
             std::ofstream myfile_replace(output_file);
             if (!myfile.is_open())
                return (1);
            while (std::getline(myfile, line))
            {
                std::size_t found = 0;
                while (1)
                {
                    found = line.find(s1, found);
                    if (found != std::string::npos)
                    {
                        line.erase(found, s1.length());
                        line.insert(found, s2);
                        found++;
                    }
                    else
                        break;
                }
                myfile_replace << line << std::endl;
            }
            myfile_replace.close();
            myfile.close();
        }
        else
            std::cout << "Unable to open file";
    }
    else
        std::cout << "ERROR\nMore or Few Arguments" << std::endl;
    return 0;
}
