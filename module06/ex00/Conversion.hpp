/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:53:02 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/16 01:07:43 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _CONVERSION_H
#define _CONVERSION_H

#include <iostream>
#include <string>
#include <iomanip>


class Conversion 
{
    
public:
    int myInt;
    char myChar;
    double myDouble;
    float myFloat;
    Conversion();
    Conversion(Conversion &);
    Conversion &operator=(Conversion &);
    ~Conversion();
    void convert(std::string);
    void print(int);
    void print(double);
    void print(char *);
};
#endif