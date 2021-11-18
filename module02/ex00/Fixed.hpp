/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:29:30 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/18 21:46:46 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H
#define _FIXED_H

#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(Fixed &);
    Fixed &operator=(Fixed &) ;
    ~Fixed();
    int getRawBits() const ; // const corectness
    void setRawBits( int const raw ); 
private:
    int fixed_point;
    static int const fractional_bits = 8;
};
#endif
