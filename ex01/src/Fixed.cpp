/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:13:16 by lorey             #+#    #+#             */
/*   Updated: 2025/05/05 19:51:02 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value)
{
	std::cout << "Int construcotr called" << std::endl;
}

Fixed::Fixed(const float fvalue)
{
	std::cout << "Float construcotr called" << std::endl;
	_value = (int)roundf(fvalue * (1 << _bit_nbr));
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->_value = fixed.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    std::cout << "Operator + called" << std::endl;
    Fixed result;
    result.setRawBits(this->_value + fixed._value);
    return result;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member fuction called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    // Use the public getRawBits() method to access the value
    os << fixed.getRawBits();
    // Return the stream to allow chaining (e.g., std::cout << a << b;)
    return os;
}
