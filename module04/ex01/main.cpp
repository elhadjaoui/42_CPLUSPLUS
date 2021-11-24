/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:17:36 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/24 23:40:56 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Cat *cat = new Cat();
    Cat *cat1 = new Cat();
    cat1 = cat;

    std::cout << cat->getBrain() << std::endl;
    std::cout << cat1->getBrain();
    delete cat;

    delete cat1;
    
}