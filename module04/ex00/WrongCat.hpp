/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:48:22 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/05 14:49:14 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public  WrongAnimal
{

public:
    WrongCat();
    WrongCat(WrongCat &);
    WrongCat &operator=(WrongCat &);
    ~WrongCat();
    void makeSound() const;
    std::string getType();
    void setType(std::string);
};
