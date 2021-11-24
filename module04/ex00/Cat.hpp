/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:39:43 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/24 19:46:48 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
protected:
    std::string type;

public:
    Cat();
    Cat(Cat &);
    Cat &operator=(Cat &);
    ~Cat();
    void makeSound() const;
    std::string getType();
    void setType(std::string);
};
