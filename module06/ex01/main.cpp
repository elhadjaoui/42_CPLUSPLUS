/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:29:26 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/17 22:02:11 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


using namespace std;

struct Data {
    int x;
    
};
 uintptr_t serialize(Data* ptr)
 {
   return  reinterpret_cast<uintptr_t>(ptr);
 }

 Data* deserialize(uintptr_t raw)
 {
   return  reinterpret_cast<Data*>(raw);
 }
int main()
{
  Data ptr;
  ptr.x = 5;
  uintptr_t a = serialize(&ptr);
  std::cout << a << std::endl;
  Data *s = deserialize(a);
  std::cout << s->x << std::endl;
  
    return 0;
}