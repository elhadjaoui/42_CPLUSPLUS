/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:41:58 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/18 02:10:22 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_point = fixed.fixed_point;
    return (fixed);
}

Fixed::Fixed(const int num)
{
    this->fixed_point = num << this->fractional_bits;
}

Fixed::Fixed(const float num)
{
    this->fixed_point = num << this->fixed_point;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = fixed.fixed_point;
}

int Fixed::toInt() const 
{
    return (this->fixed_point << this->fractional_bits);
}

float Fixed::toFloat() const 
{
    return (this->fixed_point << this->fractional_bits);
}

