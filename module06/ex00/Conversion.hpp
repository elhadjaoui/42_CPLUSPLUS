/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:53:02 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/11 19:19:52 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _CONVERSION_H
#define _CONVERSION_H

#include <iostream>
#include <string>

class Conversion 
{
    
public:
    int myInt;
    char myChar;
    double myDouble;
    float myFloat;
    std::string check;
    Conversion();
    Conversion(Conversion &);
    Conversion &operator=(Conversion &);
    ~Conversion();
    void convert(std::string);
    // void print_result();
};
#endif