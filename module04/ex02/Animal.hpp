/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:19:25 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/27 20:36:52 by mel-hadj         ###   ########.fr       */
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
    virtual ~Animal();
    void setType(std::string);
    virtual std::string getType() const ;
    virtual void makeSound() const = 0 ;
};

#endif

