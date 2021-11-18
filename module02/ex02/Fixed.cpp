/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:41:58 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/19 00:11:55 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->fixed_point = fixed.fixed_point;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat() << std::endl;
    return (os);
}

Fixed::Fixed(const int num)
{
    this->fixed_point = num << this->fractional_bits;
}

Fixed::Fixed(const float num)
{
    this->fixed_point = (int)roundf(num * 256);
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

int Fixed::toInt() const
{
    return (this->fixed_point >> this->fractional_bits);
}

float Fixed::toFloat() const
{
    return (this->fixed_point / 256); // 2^8 = 256 : shift to the right by 8 bits
}

int Fixed::getRawBits() const
{
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

// compariason operators


bool Fixed::operator>(const Fixed &fixed2)
{
    return (this->getRawBits() > fixed2.getRawBits());
}
bool Fixed::operator<(const Fixed &fixed2)
{
     return (this->getRawBits() < fixed2.getRawBits());
}
bool Fixed::operator==(const Fixed &fixed2)
{
     return (this->getRawBits() == fixed2.getRawBits());
}
bool Fixed::operator>=(const Fixed &fixed2)
{
     return (this->getRawBits() >= fixed2.getRawBits());
}
bool Fixed::operator<=(const Fixed &fixed2)
{
     return (this->getRawBits() <= fixed2.getRawBits());
}
bool Fixed::operator!=(const Fixed &fixed2)
{
     return (this->getRawBits() != fixed2.getRawBits());
}

// arithmetic operators

int Fixed::operator /(const Fixed &fixed2)
{
    return (this->getRawBits() / fixed2.getRawBits());
}
int Fixed::operator +(const Fixed &fixed2)
{
    return (this->getRawBits() + fixed2.getRawBits());
}
int Fixed::operator *(const Fixed &fixed2)
{
    return (this->getRawBits() * fixed2.getRawBits());
}
int Fixed::operator -(const Fixed &fixed2)
{
    return (this->getRawBits() - fixed2.getRawBits());
}

// post-pre / increment-decrement

int Fixed::operator++()
{
    
}

int Fixed::operator++(int)
{
    
}

int Fixed::operator--()
{
    
}

int Fixed::operator--(int)
{
    
}