/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:29:26 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/16 01:07:30 by mel-hadj         ###   ########.fr       */
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
  }
  else
  {
    std::cout << "More/Few Arguments" << std::endl;
    return 1;    
  }
  return 0;
}
