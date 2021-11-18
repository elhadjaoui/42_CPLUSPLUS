/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:41:58 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/18 21:53:22 by mel-hadj         ###   ########.fr       */
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
Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = fixed.fixed_point;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}