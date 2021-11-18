/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:29:30 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/18 02:07:25 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &);
    Fixed(const int num);
    Fixed(const float num);
    Fixed &operator=(Fixed &) ;
    ~Fixed();
    int toInt() const ; // const corectness
    float toFloat() const ; 
private:
    int fixed_point;
    static int const fractional_bits = 8;
};
