/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:24:49 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/18 00:01:53 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template<typename T>
void iter(T *array, int length, void (*func)(T))
{
   for (int i = 0; i < length; i++)
   {
      func(array[i]);
   }
   
}

#endif // !MAIN_H