/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:29:30 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/18 22:43:56 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _FIXED_H
#define _FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &);
    Fixed(const int num);
    Fixed(const float num);
    Fixed &operator=(const Fixed &fixed);
    ~Fixed();
    int toInt() const ; // const corectness
    float toFloat() const ; 
    int getRawBits() const ; // const corectness
    void setRawBits( int const raw ); 
private:
    int fixed_point;
    static int const fractional_bits = 8;
};
    std::ostream& operator <<(std::ostream&, const Fixed &);
#endif