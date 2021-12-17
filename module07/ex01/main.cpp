/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:29:26 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/18 00:04:07 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void print(std::string k)
{
  std::cout << k << std::endl;
}
int main(void)
{
  std::string array[3] = {"5","6","78"};
  ::iter(array, 3, print);

  return 0;
}