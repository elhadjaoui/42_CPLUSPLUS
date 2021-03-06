/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:57 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/05 12:02:00 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H
#define _DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"


class Dog : public Animal
{

public:
    Dog();
    Dog(Dog &);
    Dog& operator=(Dog &);
    ~Dog();
    void makeSound() const;
    std::string getType() const;
    void setType(std::string);
};

#endif

