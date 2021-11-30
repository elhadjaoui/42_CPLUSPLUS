/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:34:41 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/24 23:46:56 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef _BRAIN_H
#define _BRAIN_H

#include <iostream>
#include <string>

class Brain
{
public:
    Brain();
    Brain(Brain &);
    Brain& operator=(Brain &);
    ~Brain();
    std::string ideas[100];
};

#endif

