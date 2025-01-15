/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:29:50 by jolivare          #+#    #+#             */
/*   Updated: 2024/10/18 14:41:25 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed(void):value(0)
{
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	this->value = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const int num)
{
	this->value = roundf(num * (1 << this->fraction));
}

Fixed::Fixed(const float num)
{
	this->value = roundf(num * (1 << this->fraction));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->fraction));
}
int	Fixed::toInt(void) const
{
	return (this->value >> this->fraction);
}

bool	Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	aux = *this;
	++this->value;
	return (aux);
}

Fixed	Fixed::operator--(int)
{
	Fixed	aux = *this;
	--this->value;
	return (aux);
}

Fixed	&Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1.toFloat() <= num2.toFloat())
		return (num1);
	return (num2);
}

Fixed	&Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1.toFloat() >= num2.toFloat())
		return (num1);
	return (num2);
}

const Fixed	 &Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1.toFloat() <= num2.toFloat())
		return (num1);
	return (num2);
}

const Fixed	 &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1.toFloat() >= num2.toFloat())
		return (num1);
	return (num2);
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}