/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:17:36 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/01 03:53:03 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal* animal[4];

    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            animal[i] = new Cat();
        else
            animal[i] = new Dog();
    }
    for (int i = 0; i < 4; i++)
    {
       delete animal[i];
    }
  
    // deep copy test

    {
        Cat *cat = new Cat();
        Cat *cat1 = new Cat();
        cat->getBrain()->ideas[0] = "think";
        *cat1 = *cat;
        std::cout << cat1->getBrain()->ideas[0] << std::endl;
        cat->getBrain()->ideas[0] = "world";
        std::cout << cat1->getBrain()->ideas[0] << std::endl;
        delete cat;
        delete cat1;
    }
    
}