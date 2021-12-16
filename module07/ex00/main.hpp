/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:24:49 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/16 23:29:41 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>

template<typename T>
void swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

template<typename T>
T min(T a, T b)
{
    if (b <= a)
        return b;
    return a;
}

template<typename T>
T max(T a, T b)
{
    if (b >= a)
        return b;
    return a;
}


#endif // !MAIN_H