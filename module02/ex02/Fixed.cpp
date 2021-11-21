/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:41:58 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/19 22:26:04 by mel-hadj         ###   ########.fr       */
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
    os << fixed.toFloat();
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
    return ((float)this->fixed_point / 256); // 2^8 = 256 : shift to the right by 8 bits
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

float Fixed::operator/(const Fixed &fixed2)
{
    return (this->toFloat() / fixed2.toFloat());
}
float Fixed::operator+(const Fixed &fixed2)
{
    return (this->toFloat() + fixed2.toFloat());
}
float Fixed::operator*(const Fixed &fixed2)
{
    return (this->toFloat() * fixed2.toFloat());
}
float Fixed::operator-(const Fixed &fixed2)
{
    return (this->toFloat() - fixed2.getRawBits());
}

// post-pre / increment-decrement

Fixed Fixed::operator++()
{
    ++(this->fixed_point);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    (this->fixed_point)++;
    return (tmp);
}

Fixed Fixed::operator--()
{
    --(this->fixed_point);
    return *this; 
}

Fixed Fixed::operator--(int)
{
     Fixed tmp(*this);
    (this->fixed_point)--;
       return (tmp); 
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return b;
    else
        return a;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return b;
    else
        return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}