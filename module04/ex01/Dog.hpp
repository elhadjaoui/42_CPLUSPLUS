/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:57 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/24 22:44:13 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H
#define _DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;

protected:
    std::string type;

public:
    Dog();
    Dog(Dog &);
    Dog &operator=(Dog &);
    ~Dog();
    void makeSound() const;
    std::string getType() const;
    void setType(std::string);
};

#endif
