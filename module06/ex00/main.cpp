/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:29:26 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/12 21:12:45 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Conversion.hpp"

int main(int argc, const char **argv)
{

  if (argc == 2)
  {

    Conversion conversion;
    conversion.convert(argv[1]);
    std::cout << conversion.myFloat << std::endl;
    std::cout << conversion.myDouble << std::endl;
  }
  else
  {
    std::cout << "More/Few Arguments" << std::endl;
    return 1;    
  }
  return 0;
}
