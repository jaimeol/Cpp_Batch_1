/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:25:36 by jolivare          #+#    #+#             */
/*   Updated: 2024/10/18 14:38:54 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include <cstdio>

class Fixed
{
	private:
		int					value;
		static const int	fraction;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(Fixed const &copy);
		
		//OVERLOADED OPERATOR
		Fixed	&operator=(const Fixed &copy);
		
		//COMPARISON OPERATORS
		bool 	operator>(Fixed fixed) const;
		bool	operator<(Fixed fixed) const;
		bool	operator>=(Fixed fixed) const;
		bool	operator<=(Fixed fixed) const;
		bool	operator!=(Fixed fixed) const;
		bool	operator==(Fixed fixed) const;
		
		//ARITHMETIC OPERATORS
		float	operator+(Fixed fixed) const;
		float	operator-(Fixed fixed) const;
		float	operator*(Fixed fixed) const;
		float	operator/(Fixed fixed) const;

		//PREINCREMENT OPERATORS
		Fixed	operator++();
		Fixed	operator--();

		//POSTINCREMENT OPERATORS
		Fixed	operator++(int);
		Fixed	operator--(int);

		//MIN/MAX
		static Fixed &min(Fixed &first, Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(const Fixed &num1, const Fixed &num2);
		static const Fixed &min(const Fixed &num1, const Fixed &num2);
		
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);