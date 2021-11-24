/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:19:25 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/24 22:28:31 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal &);
    Animal& operator=(Animal &);
    ~Animal();
    void setType(std::string);
    virtual std::string getType() const ;
    virtual void makeSound() const ;
};

#endif

