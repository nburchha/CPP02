/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:19:59 by nburchha          #+#    #+#             */
/*   Updated: 2024/07/18 10:40:48 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	_value = copy.getRawBits();
}

Fixed::Fixed(const int value)
{
	_value = value << fractionalBits;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << fractionalBits));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const
{
	return static_cast<float>(_value) / (1 << fractionalBits);
}

int Fixed::toInt() const
{
	return _value >> fractionalBits;
}


int Fixed::getRawBits() const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	_value = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

//arithmetic
Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(toFloat() / other.toFloat());
}

//comparison
bool Fixed::operator==(const Fixed& other) const
{
	if (this->_value == other._value)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (this->_value != other._value)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (this->_value <= other._value)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (this->_value >= other._value)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& other) const
{
	if (this->_value < other._value)
		return true;
	return false;
}

bool Fixed::operator>(const Fixed& other) const
{
	if (this->_value > other._value)
		return true;
	return false;
}

//increment decrement
Fixed& Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	
	this->_value++;
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	
	this->_value--;
	return tmp;
}

//min max
Fixed& Fixed::min(Fixed& one, Fixed& two)
{
	if (one._value < two._value)
		return one;
	return two;
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two)
{
	if (one._value < two._value)
		return one;
	return two;
}

Fixed& Fixed::max(Fixed& one, Fixed& two)
{
	if (one._value > two._value)
		return one;
	return two;
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two)
{
	if (one._value > two._value)
		return one;
	return two;
}