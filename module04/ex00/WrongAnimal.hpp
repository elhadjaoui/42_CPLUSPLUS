/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:34:53 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/05 14:40:40 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_H
#define _WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &);
    WrongAnimal &operator=(WrongAnimal &);
    ~WrongAnimal();
    void setType(std::string);
    std::string getType() const;
    void makeSound() const;
};

#endif